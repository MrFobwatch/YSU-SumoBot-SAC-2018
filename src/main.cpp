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

void setup()
{
  lcd.clear();
  lcd.print(F("Main Menu"));
  delay(1500);
}

void loop()
{

  menu.scrollMenu();
}
