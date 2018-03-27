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

void Motors::turnRobot(int angle) {
  turnSensor.turnSensorReset();
  while angle > turnSensor.getTurnAngle(){
    //Read the gyro to update turnAngle, the estimation of how far the robot has turned
    //and turnRate, the estimation of how fast it's turning
    turnSensor.turnSensorUpdate();
    // Calculate the motor turn speed using proportional
    // derivative PID terms.  Here we are a using a
    // constant of 56 and a derivative constant of 1/20
    int32_t turnSpeed = -(int32_t)turnAngle / (turnAngle1 / 56) - turnRate / 20;
    // Constrain our motor speeds to be between -maxSpeed and maxSpeed
    turnSpeed = constrain(turnSpeed, -maxSpeed, maxSpeed);
    motors.setSpeeds(-turnSpeed, turnSpeed);
  }
}

void Motors::stopRobot() {
  motors.setSpeeds(0,0);
}
