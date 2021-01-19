//
// Created by drlim on 19/01/2021.
//

#ifndef MBED_COUNTER_SINGLEDIGITNUMERICDISPLAY_H
#define MBED_COUNTER_SINGLEDIGITNUMERICDISPLAY_H

#include "mbed.h"


/**
 * A single digit numeric display class used to modify the output of a single digit numeric display.
 * @author - David Lim
 */
class SingleDigitNumericDisplay {
public:
    /**
     * Constructor for the SingleDigitNumericDisplay object connected to the specified pins.
     * @param pinA - Pin that led A is connected to on the mbed board
     * @param pinB - Pin that led B is connected to on the mbed board
     * @param pinC - Pin that led C is connected to on the mbed board
     * @param pinD - Pin that led D is connected to on the mbed board
     * @param pinE - Pin that led E is connected to on the mbed board
     * @param pinF - Pin that led F is connected to on the mbed board
     * @param pinG - Pin that led G is connected to on the mbed board
     * @param pinDP2 - Pin that the decimal point 2 led is connected to on the mbed board
     */
    SingleDigitNumericDisplay(PinName pinA, PinName pinB, PinName pinC, PinName pinD, PinName pinE, PinName pinF,
                              PinName pinG, PinName pinDP2);

    /**
     * Set the display output to the specified integer. The integer should be between 0-9 or the display will display
     * blank.
     * @param number - The number to be shown on the display
     */
    void setDisplay(int number);

    /**
     * Clear the display so that nothing is shown
     */
    void clearDisplay();

private:
    /* Digital outputs to be used to setting the state of pins on the display */
    DigitalOut *ledA, *ledB, *ledC, *ledD, *ledE, *ledF, *ledG, *ledDP2;
};


#endif //MBED_COUNTER_SINGLEDIGITNUMERICDISPLAY_H
