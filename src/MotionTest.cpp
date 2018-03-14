#include "motionTest.h"

Motors::Motors() {}

// Tests Compass, Motors, Encoders, and Gyro
void Motors::MotionTest() {

  for( int i=0 ; i<=10 ; i++ ){
    motors.setSpeeds(i,i);
    delay(800);
  }
  for( int i=10 ; i>0 ; i-- ){
    motors.setSpeeds(i,i);
    delay(800);
  }

}
