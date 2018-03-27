#include "MotorTest.h"

Motors::Motors() {}

// Tests Compass, Motors, Encoders, and Gyro
void Motors::MotorTest() {

  for( int i=1 ; i<=200 ; i+=10 ){
    motors.setSpeeds(i,i);
    delay(500);
  }
  for( int i=200 ; i>=1 ; i-=10 ){
    motors.setSpeeds(i,i);
    delay(500);
  }

}

void Motors::stopRobot() {
  motors.setSpeeds(0,0);
}
