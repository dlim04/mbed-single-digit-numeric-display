//
// Created by drlim on 19/01/2021.
//

#include "SingleDigitNumericDisplay.h"
#include <map>

SingleDigitNumericDisplay::SingleDigitNumericDisplay(PinName pinA, PinName pinB, PinName pinC, PinName pinD,
                                                     PinName pinE, PinName pinF, PinName pinG, PinName pinDP2,
                                                     bool polarity) : leds(pinA, pinB, pinC, pinD, pinE, pinF, pinG,
                                                                           pinDP2), polarity(polarity) {
    clear();
}

void SingleDigitNumericDisplay::write(int number) {
    clear();
    std::map<int, int> bitmaps {{0, 0x3F},
                                {1, 0x06},
                                {2, 0x5B},
                                {3, 0x4F},
                                {4, 0x66},
                                {5, 0x6D},
                                {6, 0x7D},
                                {7, 0x07},
                                {8, 0x7F},
                                {9, 0x6F}};
    auto bitmapIterator = bitmaps.find(number);
    int bitmap = 0x79;
    if (bitmapIterator != bitmaps.end()) {
        bitmap = bitmapIterator->second;
    }
    if (polarity){
        leds.write(bitmap);
    } else{
        leds.write(~bitmap);
    }
}

void SingleDigitNumericDisplay::write(char character) {
    clear();
    std::map<char, int> bitmaps {{'0', 0x3F},
                                 {'1', 0x06},
                                 {'2', 0x5B},
                                 {'3', 0x4F},
                                 {'4', 0x66},
                                 {'5', 0x6D},
                                 {'6', 0x7D},
                                 {'7', 0x07},
                                 {'8', 0x7F},
                                 {'9', 0x6F},
                                 {'#', 0x5C},
                                 {'*', 0x63}};
    auto bitmapIterator = bitmaps.find(character);
    int bitmap = 0x79;
    if (bitmapIterator != bitmaps.end()) {
        bitmap = bitmapIterator->second;
    }
    if (polarity){
        leds.write(bitmap);
    } else{
        leds.write(~bitmap);
    }
}

void SingleDigitNumericDisplay::clear() {
    if (polarity){
        leds.write(0x00);
    } else{
        leds.write(~0x00);
    }
}
