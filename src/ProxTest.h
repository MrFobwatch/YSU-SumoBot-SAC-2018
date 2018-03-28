#ifndef PROXTEST_H
#define PROXTEST_H

#include <Zumo32U4.h>

class ProxSensor {
public:
  ProxSensor();
  void ProxTest();
  void printReadingsToLCD();

private:
  void loadCustomCharacters();
  void printBar(uint8_t height);
};

extern Zumo32U4ProximitySensors proxSensors;
extern Zumo32U4LCD lcd;
#endif /* end of include guard: BATTERYLEVEL_H */
