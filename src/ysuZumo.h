#ifndef YSUZUMO_H
#define YSUZUMO_H

#include <Wire.h>
#include <Zumo32U4.h>

#include "batteryLevel.h"
#include "MotionTest.h"

Battery myBattery;
Motors myMotor;

extern Zumo32U4ButtonA buttonA;
extern Zumo32U4ButtonB buttonB;
extern Zumo32U4ButtonC buttonC;
extern Zumo32U4LCD lcd;
extern Zumo32U4Buzzer buzzer;
#endif /* end of include guard: YSUZUMO_H */
