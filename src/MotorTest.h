#ifndef MOTORTEST_H
#define MOTORTEST_H
#include <Zumo32U4.h>

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
#endif /* end of include guard: MOTORTEST_H */
