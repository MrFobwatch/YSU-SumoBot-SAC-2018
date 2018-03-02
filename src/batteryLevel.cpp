#include "batteryLevel.h"


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
    lcd.clear();
    lcd.print(readBatteryMillivolts());
    lcd.print(" B->");
    lcd.gotoXY(0,1);

      if(readBatteryMillivolts()<4000) {
        Serial.println("   Battery Level: Charge Immediately! ");
        lcd.print("Charge!");
      }
      else {
        Serial.println("   Battery level: Good");
        lcd.print("You good");
      }

    }
}
