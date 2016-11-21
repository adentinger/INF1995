#include <lib.h>
#include <timer.h>
#include <buzzer.h>
#include <uart.h>

#include "LineSnsr.h"
#include "DistSnsr.h"
#include "ColorSnsr.h"
#include "path.h"

void globalInit(Engine& engL, Engine& engR) {
    DDRA = 0x60; // 0110 0000
    DDRB = 0xFD; // 1111 1101
    DDRC = 0xFF; // 1111 1111
    DDRD = 0xFF; // 1111 1111
    
    
    UART::init(2400);
    CAN::init();
    LineSnsr::init(&PINA, &PORTA, &DDRA);
    DistSnsr::init(PA7);
    ColorSnsr::init(T1_RISING_EDGE);
    Path::init(&engL, &engR);
}


void testColorSensor() {
    for EVER {
        ColorRead curCR = ColorSnsr::read();
        UART::transmitHex(curCR);
        UART::transmit(' ');
    }
}

void testDistSensor() {
    for EVER {
        uint16_t curDR = DistSnsr::read();
        UART::transmitHex(curDR >> 8);
        UART::transmitHex(curDR);
        UART::transmit(' ');
        _delay_ms(1000.0);
    }
}

void readShape() {
    Path::turn(ROT_RIGHT);
    _delay_ms(500.0);
    while (!(LineSnsr::read() & 0x08));
    Path::stop();
}

int main() {
    Engine engL(T0CA);
    Engine engR(T0CB);
    
    globalInit(engL, engR);
    
    testDistSensor();
    
    /*
    Path::doPath(0);
    readShape();
    Path::doPath(1);
    readShape();
    Path::doPath(1);
    readShape();
    Path::doPath(2);*/
    
    return 0;
}
