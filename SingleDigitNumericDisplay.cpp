//
// Created by drlim on 19/01/2021.
//

#include "SingleDigitNumericDisplay.h"

SingleDigitNumericDisplay::SingleDigitNumericDisplay(PinName pinA, PinName pinB, PinName pinC, PinName pinD, PinName pinE, PinName pinF,
                                                     PinName pinG, PinName pinDP2) {
    this->ledA = new DigitalOut(pinA);
    this->ledB = new DigitalOut(pinB);
    this->ledC = new DigitalOut(pinC);
    this->ledD = new DigitalOut(pinD);
    this->ledE = new DigitalOut(pinE);
    this->ledF = new DigitalOut(pinF);
    this->ledG = new DigitalOut(pinG);
    this->ledDP2 = new DigitalOut(pinDP2);

    this->clearDisplay();
}

void SingleDigitNumericDisplay::setDisplay(int number) {
    this->clearDisplay();
    switch (number) {
        case 0:
            this->ledA->write(0);
            this->ledB->write(0);
            this->ledC->write(0);
            this->ledD->write(0);
            this->ledE->write(0);
            this->ledF->write(0);
            break;
        case 1:
            this->ledB->write(0);
            this->ledC->write(0);
            break;
        case 2:
            this->ledA->write(0);
            this->ledB->write(0);
            this->ledD->write(0);
            this->ledE->write(0);
            this->ledG->write(0);
            break;
        case 3:
            this->ledA->write(0);
            this->ledB->write(0);
            this->ledC->write(0);
            this->ledD->write(0);
            this->ledG->write(0);
            break;
        case 4:
            this->ledB->write(0);
            this->ledC->write(0);
            this->ledF->write(0);
            this->ledG->write(0);
            break;
        case 5:
            this->ledA->write(0);
            this->ledC->write(0);
            this->ledD->write(0);
            this->ledF->write(0);
            this->ledG->write(0);
            break;
        case 6:
            this->ledA->write(0);
            this->ledC->write(0);
            this->ledD->write(0);
            this->ledE->write(0);
            this->ledF->write(0);
            this->ledG->write(0);
            break;
        case 7:
            this->ledA->write(0);
            this->ledB->write(0);
            this->ledC->write(0);
            break;
        case 8:
            this->ledA->write(0);
            this->ledB->write(0);
            this->ledC->write(0);
            this->ledD->write(0);
            this->ledE->write(0);
            this->ledF->write(0);
            this->ledG->write(0);
            break;
        case 9:
            this->ledA->write(0);
            this->ledB->write(0);
            this->ledC->write(0);
            this->ledD->write(0);
            this->ledF->write(0);
            this->ledG->write(0);
            break;
        default:
            break;
    }
}

void SingleDigitNumericDisplay::clearDisplay() {
    this->ledA->write(1);
    this->ledB->write(1);
    this->ledC->write(1);
    this->ledD->write(1);
    this->ledE->write(1);
    this->ledF->write(1);
    this->ledG->write(1);
    this->ledDP2->write(1);
}
