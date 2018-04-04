#ifndef FIGHTCLUB_H
#define FIGHTCLUB_H
#include <Zumo32U4.h>
#include <MotionTest.h>
#include <ProxTest.h>

class Fight {
public:
  void fightClub();
};

extern Zumo32U4Encoders encoders;
extern Zumo32U4Motors motors;
extern Zumo32U4LCD lcd;
extern Zumo32U4ProximitySensors proxSensors;
extern Zumo32U4ButtonA buttonA;
#endif /* end of include guard: BATTERYLEVEL_H */
