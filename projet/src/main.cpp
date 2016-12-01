/**
 * @file    main.cpp
 * 
 * @brief   Fichier principal du projet.
 * 
 * @authors Belhaddad, Emir Khaled
 * @authors Dandenault, Vincent
 * @authors Dentinger, Anthony
 * @authors Younis, Gergi
 * 
 * @date Automne 2016
 * 
 * @copyright Code qui n'est sous aucune license.
 */

/**
 * @mainpage BIENVENUE DANS LA DOCUMENTATION DE NOTRE PROJET
 * @anchor  SRC_MAINPAGE
 * 
 * Notre répertoire Git contient trois documentations:
 * <ol type="1">
 *     <li>La documentation de notre [librairie](@ref LIB_MAINPAGE), située sous lib/ ;</li>
 *     <li>La documentation de notre [compilateur GAS](@ref GAS_MAINPAGE), situé sous projet/gas/; </li>
 *     <li>La documentation des [fichiers créés pour notre projet](@ref SRC_MAINPAGE), situés sous projet/src.</li>
 * </ol>
 * 
 * <div id="PLUGIN">
 * <h2>Comment brancher les composantes</h2>
 * <ul>
 *     <li>PORT A</li>
 *     <ul>
 *         <li>0-5: @link LineSnsr Suiveur de ligne@endlink. Les bits des
 *             capteurs sont du côté des bits moins significatifs.</li>
 *         <li>7: Bit OUT du @link DistSnsr capteur de distance@endlink.</li>
 *     </ul>
 *     <li>PORT B</li>
 *     <ul>
 *         <li>0-1: Bits %LED et OUT (respectivement) du @link ColorSnsr capteur de couleur@endlink.</li>
 *         <li>2-3: Bits du @link Buzzer piézo-électrique@endlink.</li>
 *     </ul>
 *     <li>PORT C</li>
 *     <ul>
 *         <li>2-3: Bits S0 et S1 (respectivement) du @link ColorSnsr capteur de couleur@endlink.</li>
 *         <li>4-5: @link LED Del libre@endlink. La borne positive doit être
 *             vers l'extérieur de la carte (du même côté que le VCC).</li>
 *         <li>6-7: Bits S2 et S3 (respectivement) du @link ColorSnsr capteur de couleur@endlink.</li>
 *     </ul>
 *     <li>PORT D</li>
 *     <ul>
 *         <li>4,6: Bits <i>Direction</i> et <i>Enable</i> du @link Engine moteur @endlink droit.</li>
 *         <li>5,7: Bits <i>Direction</i> et <i>Enable</i> du @link Engine moteur @endlink gauche.</li>
 *     </ul>
 * </ul>
 * 
 * </div>
 * 
 * <div id="HOWTO">
 * <h2>Faire fonctionner notre projet</h2>
 * </div>
 * 
 * Pour faire fonctionner le programme, il vous faut tout d'abord transférer le
 * bytecode des chemins dans la mémoire externe du robot afin que l'interpréteur
 * puisse les lire. Le programme a aussi besoin d'avoir la chanson à jouer
 * lorsque le robot a fini le parcours.
 * 
 * 
 * Pour transférer les chemins, ouvrez un terminal puis entrez les commandes:
 * 
 * <pre class="fragment">path/to/repo/<b>projet/gas$</b> make
 * path/to/repo/<b>projet/gas$</b> ./gas input.txt paths.bin; cp paths.bin ../src/transfert</pre>
 * 
 * Par la suite, assurez-vous que le robot est branché et
 * prêt à recevoir des données et exécutez la commande:
 *     
 * <pre class="fragment">path/to/repo/<b>projet/src/transfert$</b> make install</pre>
 * 
 * La Del libre devrait s'allumer en rouge. Ensuite, faites la
 * commande suivante pour transférer les chemins sur la @link RAM mémoire externe@endlink:
 * 
 * <pre class="fragment">path/to/repo/<b>projet/src/transfert$</b> serieViaUSB -e -h -s 8 -f paths.bin</pre>
 * 
 * La Del devrait clignoter faiblement avant de s'éteindre. Maintenant, les chemins
 * sont normalement transférés dans la mémoire et visibles pour l'interpréteur.
 * 
 * 
 * Pour transférer la chanson de fin, tout ce que vous devez faire est d'entrer la commande:
 * 
 * <pre class="fragment">path/to/repo/<b>projet/song$</b> make</pre>
 * 
 * Le processus est automatisé. La chanson qui se trouve dans le code du
 * sous-répertoire song_data/ est tout d'abord compilée en un fichier binaire pour
 * ensuite être transféré à l'aide du programme dans le répertoire projet/song/ .
 * Lors du transfert, la Del devrait clignotER entre vert et rouge puis, à la fin du
 * transfert, devrait s'éteindre.
 * 
 * 
 * Finalement, lorsque toutes les données ont été transférées dans la mémoire
 * externe, il ne reste plus qu'a envoyer le programme principal dans la mémoire
 * flash.
 * 
 * <pre class="fragment">path/to/repo/<b>projet/src</b><b>$</b> make install</pre>
 * 
 * Le programme se compile et s'installe automatiquement. Il ne reste plus qu'a
 * placer le robot sur la ligne de départ, enclancher les moteurs et démarrer le
 * robot!
 */

#include <lib.h>
#include <timer.h>
#include <led.h>
#include <buzzer.h>
#include <uart.h>

#include "LineSnsr.h"
#include "DistSnsr.h"
#include "ColorSnsr.h"
#include "ShapeDetector.h"
#include "ColorSequenceDetector.h"
#include "path.h"
#include "tests.h"
#include "Player.h"

/**
 * @brief   Initialisation globale du microcontrôleur.
 * @param[in,out] engL  Moteur gauche. Doit être instancié dans main pour
 *      éviter qu'il soit détruit.
 * @param[in,out] engR  Moteur droit. Doit être instancié dans main pour
 *      éviter qu'il soit détruit.
 * @param[in,out] led   LED libre. Doit être instancié dans main pour
 *      éviter qu'il soit détruit.
 */
void globalInit(Engine& engL, Engine& engR, LED& led) {
    // DDRA est modifié par LineSnsr::init.
    DDRB = 0xFD; // 1111 1101
    DDRC = 0xFF; // 1111 1111
    DDRD = 0xFF; // 1111 1111
    
    
    UART::init(2400);
    CAN::init();
    LineSnsr::init(&PINA, &PORTA, &DDRA);
    DistSnsr::init(PA7);
    ColorSnsr::init(T1_RISING_EDGE);
    Path::init(&engL, &engR);
    Buzzer::init(&timer0);
    ShapeDetector::init(&led);
    ColorSequenceDetector::init(&led);
    Player::init();
}

/** @cond FALSE */ // Ne pas documenter cette fonction.
int main() {
    Engine engL(T2CA);
    Engine engR(T2CB);
    LED led(C4_C5, nullptr);
    
    globalInit(engL, engR, led);
    
    ShapeColor shapeSequence[COLOR_SEQ_MAX];
    
	
    Path::doPath(0);
    shapeSequence[2] = ShapeDetector::checkShape();
    Path::doPath(1);
    shapeSequence[1] = ShapeDetector::checkShape();
    Path::doPath(1);
    shapeSequence[0] = ShapeDetector::checkShape();
    Path::doPath(2);
    
    ColorSequenceDetector::checkSequence(shapeSequence);
    
    Player::play();
    
    for EVER {
        // Busy wait
    }
    
    return 0;
}
/** @endcond */
