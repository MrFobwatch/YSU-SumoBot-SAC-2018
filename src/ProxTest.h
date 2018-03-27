#ifndef PROXTEST_H
#define PROXTEST_H
#include <Zumo32U4.h>

class ProxSensor {
public:
  ProxSensor();
  void ProxTest();
};

extern Zumo32U4ProximitySensors proxSensors;
#endif /* end of include guard: BATTERYLEVEL_H */
