#ifndef MOTORTEST_H
#define MOTORTEST_H
#include <Zumo32U4.h>
#include "TurnSensor.h"

class Motors {
public:
  Motors();
  void MotorTest();
  void turnRobot(int angle);
  void driveStraightTime(int time);
  void driveStraightDistance(int distance);
  void driveStraight();
  void stopRobot();
};

extern Zumo32U4Encoders encoders;
extern Zumo32U4Motors motors;
extern L3G gyro;
extern TurnSensor turnSensor;
#endif /* end of include guard: MOTORTEST_H */
