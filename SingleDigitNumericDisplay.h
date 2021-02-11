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
     * @param pinA - Pin that LED A is connected to on the mbed board
     * @param pinB - Pin that LED B is connected to on the mbed board
     * @param pinC - Pin that LED C is connected to on the mbed board
     * @param pinD - Pin that LED D is connected to on the mbed board
     * @param pinE - Pin that LED E is connected to on the mbed board
     * @param pinF - Pin that LED F is connected to on the mbed board
     * @param pinG - Pin that LED G is connected to on the mbed board
     * @param pinDP2 - Pin that the decimal point 2 LED is connected to on the mbed board
     * @param polarity - Whether the display is common anode or common cathode (true for common anode, false for common
     *                   cathode)
     */
    SingleDigitNumericDisplay(PinName pinA, PinName pinB, PinName pinC, PinName pinD, PinName pinE, PinName pinF,
                              PinName pinG, PinName pinDP2, bool polarity = true);

    /**
     * Set the display output to the specified integer. The integer should be between 0-9 otherwise the display will
     * show 'E'.
     * @param number - The number to be shown on the display
     */
    void write(int number);

    /**
     * Set the display output to the specified character. The character should be an number between 0-9, '#' or '*'
     * otherwise the display will show 'E'
     * @param character - The character to be shown on the display
     */
    void write(char character);

    /**
     * Clear the display so that nothing is shown
     */
    void clear();

private:
    BusOut leds;
    bool polarity;
};


#endif //MBED_COUNTER_SINGLEDIGITNUMERICDISPLAY_H
