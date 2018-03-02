/* This example shows how to:

- Measure the voltage of the Zumo's batteries.
- Detect whether USB power is present.

The results are printed to the LCD and also to the serial
monitor.

The battery voltage can only be read when the power switch is in
the "On" position.  If the power switch is off, the voltage
reading displayed by this demo will be low, but it might not be
zero because the Zumo 32U4 has capacitors that take a while to
discharge. */
#include <Zumo32U4.h>
#include "ysuZumo.h"


Zumo32U4ButtonA buttonA;
Zumo32U4ButtonB buttonB;
Zumo32U4ButtonC buttonC;
Zumo32U4LCD lcd;
Zumo32U4Buzzer buzzer;

void setup()
{

}

void loop()
{
  lcd.clear();
  lcd.print(F("Press A"));
  lcd.gotoXY(0,1);
  lcd.print("Battery");

  if(buttonA.isPressed()){
    myBattery.printVoltage();
  }

  if(buttonC.isPressed()) {
    buzzer.playNote(NOTE_B(6), 100, 12);
    delay(100);
    buzzer.playNote(NOTE_E(7), 250, 12);
  }
  delay(100);
}
