#include "motionTest.h"

Motors::Motors() {}

// Tests Compass, Motors, Encoders, and Gyro
void Motors::MotionTest() {
  motors.setSpeeds(10,10);
}
