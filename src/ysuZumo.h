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

const char jeopardy[] = "!O5 V8 C F C O4 F O5 C F C2 C F C F A. G8 F8 E8 D8 L8 D- C F C <F C F C2 F. D C O4 B- A G F";

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
