#ifndef MOTORTEST_H
#define MOTORTEST_H
#include <Zumo32U4.h>

class Motors {
public:
  Motors();
  void MotorTest();
};

extern Zumo32U4Encoders encoders;
extern Zumo32U4Motors motors;
#endif /* end of include guard: MOTORTEST_H */
