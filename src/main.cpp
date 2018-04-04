#include <Zumo32U4.h>
#include "ysuZumo.h"

Zumo32U4ButtonA buttonA;
Zumo32U4ButtonB buttonB;
Zumo32U4ButtonC buttonC;
L3G gyro;
LSM303 compass;
Zumo32U4Encoders encoders;
Zumo32U4Motors motors;
Zumo32U4LCD lcd;
Zumo32U4Buzzer buzzer;
Battery battery;
Motors engine;
Menu menu;
Zumo32U4ProximitySensors proxSensors;
TurnSensor turnSensor;

void setup()
{
  lcd.clear();
  lcd.print(F("Menu"));
  lcd.gotoXY(0,1);
  lcd.print(F("Press A"));
  buttonA.waitForPress();
}

void loop()
{

  menu.scrollMenu();
}
