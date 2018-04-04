#ifndef YSUZUMO_H
#define YSUZUMO_H

#include <Wire.h>
#include <Zumo32U4.h>

#include "batteryLevel.h"
#include "MotorTest.h"

#include "fightClub.h"
#include "MotorTest.h"
#include "menu.h"
#include "ProxTest.h"

// Battery battery;
// Motors motorTestMotors;
// TurnSensor turnSensor;
// Menu menu1;

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
//extern Menu menu1;
extern Battery battery;
extern Motors engine;
extern Fight fighter;

#endif /* end of include guard: YSUZUMO_H */
