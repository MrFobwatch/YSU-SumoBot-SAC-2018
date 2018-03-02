#include "batteryLevel.h"

Zumo32U4ButtonA Zumo32U4ButtonA;
Zumo32U4ButtonB buttonB;
L3G gyro;
LSM303 compass;
Zumo32U4Motors motors;
Zumo32U4Encoders encoders;

Motors::Motors() {}

// Tests Compass, Motors, Encoders, and Gyro
void Motors::MotionTest() {
  motors.setSpeeds(10,10);
}
