#include "ProxTest.h"

ProxSensor::ProxSensor() {
  proxSensors.initThreeSensors();
  loadCustomCharacters();
}

// Tests Compass, Motors, Encoders, and Gyro
void ProxSensor::ProxTest() {
  printReadingsToLCD();
}

void ProxSensor::loadCustomCharacters() {
  static const char levels[] PROGMEM = {
      0, 0, 0, 0, 0, 0, 0, 63, 63, 63, 63, 63, 63, 63
  };
  lcd.loadCustomCharacter(levels + 0, 0);  // 1 bar
  lcd.loadCustomCharacter(levels + 1, 1);  // 2 bars
  lcd.loadCustomCharacter(levels + 2, 2);  // 3 bars
  lcd.loadCustomCharacter(levels + 3, 3);  // 4 bars
  lcd.loadCustomCharacter(levels + 4, 4);  // 5 bars
  lcd.loadCustomCharacter(levels + 5, 5);  // 6 bars
  lcd.loadCustomCharacter(levels + 6, 6);  // 7 bars
}

void ProxSensor::printBar(uint8_t height) {
  if (height > 8) {
    height = 8;
  }
  const char barChars[] = {' ', 0, 1, 2, 3, 4, 5, 6, 255};
  lcd.print(barChars[height]);
}

void ProxSensor::printReadingsToLCD() {
  // On the first line of the LCD, display proximity sensor
  // readings.
  lcd.gotoXY(0, 0);
  printBar(proxSensors.countsLeftWithLeftLeds());
  printBar(proxSensors.countsLeftWithRightLeds());
  lcd.print(' ');
  printBar(proxSensors.countsFrontWithLeftLeds());
  printBar(proxSensors.countsFrontWithRightLeds());
  lcd.print(' ');
  printBar(proxSensors.countsRightWithLeftLeds());
  printBar(proxSensors.countsRightWithRightLeds());

  // On the second line of the LCD, display line sensor readings.
  // These calibrated sensor readings are between 0 and 1000, so
  // we use the map function to rescale it to 0 through 8.
//  lcd.gotoXY(0, 1);
//  for (uint8_t i = 0; i < 5; i++)
//  {
//    uint8_t barHeight = map(lineSensorValues[i], 0, 1000, 0, 8);
//    printBar(barHeight);
//  }
//
//  // On the last 3 characters of the second line, display basic
//  // readings of the sensors taken without sending IR pulses.
//  lcd.gotoXY(5, 1);
//  printBar(proxLeftActive);
//  printBar(proxFrontActive);
//  printBar(proxRightActive);
}
