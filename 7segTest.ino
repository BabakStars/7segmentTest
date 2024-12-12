#include <TM1637.h>

// Instantiation and pins configurations
// Pin 3 - > DIO
// Pin 2 - > CLK
TM1637 tm(A5, A4);

void setup()
{
    tm.begin();
    tm.setBrightnessPercent(90);
}

void loop()
{
    // Display Integers:
    tm.display("   1");
    delay(3000);

    // Display float:
    tm.display(29.65);
    delay(1000);

    // Display String:
    tm.display("PLAY");
    delay(1000);
    tm.display("STOP");
    delay(1000);
}
