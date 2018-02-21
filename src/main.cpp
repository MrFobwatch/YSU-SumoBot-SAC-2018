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

#include "ysuZumo.h"

void setup()
{

}

void loop()
{
  myBattery.printVoltage();
}
