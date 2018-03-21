#ifndef MOTIONTEST_H
#define MOTIONTEST_H
#include <Zumo32U4.h>

class Motors {
public:
  Motors();
  void MotionTest();
};

extern Zumo32U4Encoders encoders;
extern Zumo32U4Motors motors;
#endif /* end of include guard: BATTERYLEVEL_H */
