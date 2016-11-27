/**
 * Classe permettant de détecter la séquence de couleurs sur laquelle s'arrêter.
 *
 * Ecole Polytechnique de Montreal
 * Departement de genie informatique
 * Cours inf1995
 *
 * Emir Khaled Belhaddad, Anthony Dentinger,
 * Gergi Younis et Vincent Dandenault
 * 2016
 *
 * Code qui n'est sous aucune license.
 *
 */

#include "ColorSequenceDetector.h"

Color ColorSequenceDetector::colorSequence_[COLOR_SEQ_MAX];
uint8_t ColorSequenceDetector::colorSequenceCount_ = 0;
Color ColorSequenceDetector::lastColors_[LAST_COLORS_MAX] = {COLOR_READ_WHITE,COLOR_READ_WHITE,COLOR_READ_WHITE,COLOR_READ_WHITE};
uint8_t ColorSequenceDetector::lastColorsBeg_ = 0;

void ColorSequenceDetector::checkSequence(const Color shapeSequence[COLOR_SEQ_MAX], LED& led) {
    Color color = ColorSnsr::read();
    
    Path::forward();
    
    // On vérifie les 6 combinaisons
    for (uint8_t i = 0; i < 6; ++i) {
        color = ColorSnsr::read();
        colorSequenceCount_ = 0;
        
        for (uint8_t j = 0; j < LAST_COLORS_MAX; ++j) {
            lastColors_[j] = COLOR_READ_WHITE;
        }
        
        while (color != COLOR_READ_WHITE) {
            color = ColorSnsr::read();
        }
        
        // On n'a besoin que de 2 couleurs pour savoir de quelle séquence il s'agit :D
        while (colorSequenceCount_ < 2) {
            color = findColorAndAct_(led);
        }
        
        if (isCorrectSequence_(shapeSequence)) {
            Buzzer::clearTone();
            led.setColor(LED_OFF);
            Path::stop();
            break;
        }
        
        UART::transmitHex(colorSequence_[0]);
        UART::transmit(' ');
        UART::transmitHex(shapeSequence[0]);
        UART::transmit(' ');
        UART::transmitHex(colorSequence_[1]);
        UART::transmit(' ');
        UART::transmitHex(shapeSequence[1]);
        UART::transmit(' ');
        UART::transmitHex(colorSequence_[2]);
        UART::transmit(' ');
        UART::transmitHex(shapeSequence[2]);
        UART::transmit('\n');
        
        // On vérifie un 3e changement de couleur, pour la forme ;)
        while(color != COLOR_READ_WHITE) {
            color = findColorAndAct_(led);
        }
        
        Buzzer::clearTone();
        led.setColor(LED_OFF);
    }
    
    playEndingTheme_();
}

Color ColorSequenceDetector::findColorAndAct_(LED& led) {
    Color color = ColorSnsr::read();
    
    if (hasColorChanged_(color)) {
        colorSequence_[colorSequenceCount_++] = color;
    
        switch(color) {
         case OCTOGON_R:        Buzzer::clearTone(); led.setColor(LED_RED);   break;
         case CIRCLE_G:         Buzzer::clearTone(); led.setColor(LED_GREEN); break;
         case SQUARE_B:         Buzzer::setTone(68); // fallthrough
         default: led.setColor(LED_OFF);
        }
    }
    return color;
}

bool ColorSequenceDetector::hasColorChanged_(Color color) {
    // On "push_back" une nouvelle valeur dans la queue
    lastColors_[lastColorsBeg_] = color;
    ++lastColorsBeg_;
    lastColorsBeg_ %= LAST_COLORS_MAX;
    
    Color earliestColor = lastColors_[lastColorsBeg_];
    Color colorAfterEarliest = lastColors_[(lastColorsBeg_ + 1) % LAST_COLORS_MAX];
    bool hasChanged = (earliestColor != colorAfterEarliest);
    
    Color color1 = colorAfterEarliest;
    for (uint8_t i = 2; i <= (LAST_COLORS_MAX - 1) && hasChanged; ++i) {
        Color color2 = lastColors_[(lastColorsBeg_ + i) % LAST_COLORS_MAX];
        hasChanged = (color1 == color2);
        color1 = color2;
    }
    
    return hasChanged;
}

bool ColorSequenceDetector::isCorrectSequence_(const Color shapeSequence[COLOR_SEQ_MAX]) {
    bool isCorrectSeq = true;
    
    // On n'a besoin que de 2 couleurs pour savoir de quelle séquence il s'agit :D
    for (uint8_t i = 0; i <= (COLOR_SEQ_MAX - 2) && isCorrectSeq; ++i) {
        isCorrectSeq = (shapeSequence[i] == colorSequence_[i]);
    }
    
    return isCorrectSeq;
}


void ColorSequenceDetector::playEndingTheme_() {
    const float delayValue = 150.0;
    
    Buzzer::setTone(67);
    _delay_ms(delayValue);
    Buzzer::setTone(66);
    _delay_ms(delayValue);
    Buzzer::setTone(63);
    _delay_ms(delayValue);
    Buzzer::setTone(57);
    _delay_ms(delayValue);
    Buzzer::setTone(56);
    _delay_ms(delayValue);
    Buzzer::setTone(64);
    _delay_ms(delayValue);
    Buzzer::setTone(68);
    _delay_ms(delayValue);
    Buzzer::setTone(72);
    _delay_ms(delayValue);
    Buzzer::clearTone();
}