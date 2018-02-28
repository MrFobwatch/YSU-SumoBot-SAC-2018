#include "batteryLevel.h"

Zumo32U4LCD lcd2;
Zumo32U4ButtonB buttonB;

Battery::Battery() {}

// Print the results to the serial monitor.
void Battery::printVoltage() {
  while(!buttonB.isPressed()){
    Serial.print(F("USB="));
    Serial.print(usbPowerPresent() ? 'Y' : 'N');
    Serial.print(F(" B="));
    Serial.print(readBatteryMillivolts());
    Serial.print(F(" mV"));
    delay(100);
    lcd2.clear();
    lcd2.print(readBatteryMillivolts());
    lcd2.print(" B->");
    lcd2.gotoXY(0,1);

      if(readBatteryMillivolts()<4000) {
        Serial.println("   Battery Level: Charge Immediately! ");
        lcd2.print("Charge!");
      }
      else {
        Serial.println("   Battery level: Good");
        lcd2.print("You good");
      }

    }
}
