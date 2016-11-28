#include "can.h"

bool CAN::active = false;

// constructeur: initialisation du convertisseur
void CAN::init() {
    // ADC mux : reference analogique externe
    //           ajuste a droite
    ADMUX  = ( 0 << REFS1 ) | ( 0 << REFS0 ) | ( 0 << ADLAR ) | ( 0 << MUX4 ) |
             ( 0 << MUX3  ) | ( 0 << MUX2  ) | ( 0 << MUX1  ) | ( 0 << MUX0 ) ;

    // ADC Status and Control Register A : 
    //  Active le convertisseur mais sans demarrer de conversion pour l'instant.
    //  Pas de declanchement automatique et aucune interruption suivant
    //  la fin d'une convertion. Division de l'horloge par 64 (il faudra
    //  donc 13 cycles du convertisseur * 64 pour terminer une conversion
    //  soit 832 cycles d'horloge soit 104 micro-secondes
    ADCSRA = ( 1 << ADEN ) | ( 0 << ADSC )  | ( 0 << ADATE ) | ( 0 << ADIF ) |
             ( 0 << ADIE ) | ( 1 << ADPS2 ) | ( 1 << ADPS1 ) | ( 0 << ADPS0 ) ;
    // On signale que le convertisseur est pret a lire des valeurs.
    active = true;
}

// Destructeur:  Arreter le convertisseur pour sauver sur la consommation.
void CAN::terminate() {
    // rendre le convertisseur inactif.
    ADCSRA = 0 << ADEN;
    // On signale que le convertisseur ne peut plus lire de valeurs.
    active = false;
}

// Faire une conversion et aller retourner le resultat sur 16 bits
// dont seulement les 10 de poids faibles sont significatifs.
uint16_t CAN::read(uint8_t pos) {
    uint16_t adcVal;

    if (!active) // Si le CAN n'est pas actif...
        return 0xFFFF; // On retourne une valeur non valide (plus que 10 bits).

    // Garder les bits de ADMUX intacts, sauf les bit permettant 
    // la selection de l'entree
    ADMUX &= ~(( 1 << MUX4 ) | ( 1 << MUX3 ) |
                ( 1 << MUX2 ) | ( 1 << MUX1)  | ( 1 << MUX0 ));

    // selectionner l'entree voulue
    ADMUX |= ((pos & 0x07) << MUX0);

    // demarrer la conversion
    ADCSRA |= ( 1 << ADSC );

    // Attendre la fin de la conversion soit 13 cycles du convertisseur.
    while( ! (ADCSRA & ( 1 << ADIF ) ) );

    // important: remettre le bit d'indication de fin de cycle a zero 
    // pour la prochaine conversion ce qui se fait en l'ajustant a un.
    ADCSRA |= (1 << ADIF);

    // Aller chercher le resultat sur 16 bits.
    adcVal =   ADCL;
    adcVal +=  ADCH << 8;

    // resultat sur 16 bits
    return adcVal & 0x03FF;
}

