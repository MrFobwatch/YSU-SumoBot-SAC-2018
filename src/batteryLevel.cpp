#include "batteryLevel.h"

Battery::Battery() {}

// Print the results to the serial monitor.
void Battery::printVoltage() {
  Serial.print(F("USB="));
  Serial.print(usbPowerPresent() ? 'Y' : 'N');
  Serial.print(F(" B="));
  Serial.print(readBatteryMillivolts());
  Serial.println(F(" mV"));
}
