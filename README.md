# mbed-single-digit-numeric-display

## About This Repository
This class was written to enable easy interface with a seven segment display from an [Mbed](https://os.mbed.com/ "Mbed Homepage") microcontroller. 

It was specifically tested using the [Kingbright SA08-11EWA](https://www.mouser.co.uk/datasheet/2/216/SA08-11EWA-57793.pdf "Datasheet from Mouser") single digit numeric display.

## Example
The following example was written for the Mbed LPC1768 with mbed-os v6.7:
```C++
#include "mbed.h"
#include "SingleDigitNumericDisplay.h"


int main() {
    SingleDigitNumericDisplay display(p15, p16, p18, p19, p13, p14, p17, p20, false);

    int counter = 0;

    while(true){
        display.write(counter++);
        ThisThread::sleep_for(100ms);
        
        if (counter >= 10) {
            display.clear();
            counter = 0;
        }
    }
}

```

Example Breadboard Wiring for example code above:

![Image of Example Breadboard Wiring](https://github.com/drlim2u/mbed-single-digit-numeric-display/blob/main/Example%20Breadboard%20Wiring.jpg)
