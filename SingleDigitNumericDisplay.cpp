//
// Created by drlim on 19/01/2021.
//

#include "SingleDigitNumericDisplay.h"

SingleDigitNumericDisplay::SingleDigitNumericDisplay(PinName pinA, PinName pinB, PinName pinC, PinName pinD,
                                                     PinName pinE, PinName pinF, PinName pinG, PinName pinDP2) {
    ledA = new DigitalOut(pinA);
    ledB = new DigitalOut(pinB);
    ledC = new DigitalOut(pinC);
    ledD = new DigitalOut(pinD);
    ledE = new DigitalOut(pinE);
    ledF = new DigitalOut(pinF);
    ledG = new DigitalOut(pinG);
    ledDP2 = new DigitalOut(pinDP2);

    clear();
}

void SingleDigitNumericDisplay::write(int number) {
    clear();
    switch (number) {
        case 0:
            ledA->write(0);
            ledB->write(0);
            ledC->write(0);
            ledD->write(0);
            ledE->write(0);
            ledF->write(0);
            break;
        case 1:
            ledB->write(0);
            ledC->write(0);
            break;
        case 2:
            ledA->write(0);
            ledB->write(0);
            ledD->write(0);
            ledE->write(0);
            ledG->write(0);
            break;
        case 3:
            ledA->write(0);
            ledB->write(0);
            ledC->write(0);
            ledD->write(0);
            ledG->write(0);
            break;
        case 4:
            ledB->write(0);
            ledC->write(0);
            ledF->write(0);
            ledG->write(0);
            break;
        case 5:
            ledA->write(0);
            ledC->write(0);
            ledD->write(0);
            ledF->write(0);
            ledG->write(0);
            break;
        case 6:
            ledA->write(0);
            ledC->write(0);
            ledD->write(0);
            ledE->write(0);
            ledF->write(0);
            ledG->write(0);
            break;
        case 7:
            ledA->write(0);
            ledB->write(0);
            ledC->write(0);
            break;
        case 8:
            ledA->write(0);
            ledB->write(0);
            ledC->write(0);
            ledD->write(0);
            ledE->write(0);
            ledF->write(0);
            ledG->write(0);
            break;
        case 9:
            ledA->write(0);
            ledB->write(0);
            ledC->write(0);
            ledD->write(0);
            ledF->write(0);
            ledG->write(0);
            break;
        default:
            break;
    }
}

void SingleDigitNumericDisplay::clear() {
    ledA->write(1);
    ledB->write(1);
    ledC->write(1);
    ledD->write(1);
    ledE->write(1);
    ledF->write(1);
    ledG->write(1);
    ledDP2->write(1);
}
