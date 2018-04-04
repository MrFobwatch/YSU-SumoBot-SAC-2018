#ifndef YSUZUMO_H
#define YSUZUMO_H

#include <Wire.h>
#include <Zumo32U4.h>

#include "batteryLevel.h"
#include "fightClub.h"
#include "MotionTest.h"
#include "ProxTest.h"

Battery battery;
Motors motionTestMotors;
Zumo32U4ProximitySensors proxSensors;

extern Zumo32U4ProximitySensors proxSensors;
extern Zumo32U4ButtonA buttonA;
extern Zumo32U4ButtonB buttonB;
extern Zumo32U4ButtonC buttonC;
extern L3G gyro;
extern LSM303 compass;
extern Zumo32U4Encoders encoders;
extern Zumo32U4Motors motors;
extern Zumo32U4LCD lcd;
extern Zumo32U4Buzzer buzzer;
#endif /* end of include guard: YSUZUMO_H */
