#include "MotorTest.h"

Motors::Motors(){
   //TurnSensor turnSensor;
};

// Tests Compass, Motors, Encoders, and Gyro
void Motors::MotorTest() {
//
  for( int i=1 ; i<=200 ; i+=10 ){
    motors.setSpeeds(i,i);
    delay(500);
  }
  for( int i=200 ; i>=1 ; i-=10 ){
    motors.setSpeeds(i,i);
    delay(500);
  }
//   turnRobot(45);
//   delay(10);
//   turnRobot(-45);
//   delay(10);
//   turnRobot(180);
//   delay(10);
//   turnRobot(-90);
//   delay(10);
//   turnRobot(270);
//
}

 // void Motors::turnRobot(int angle) {
 // //  turnSensor.turnSensorReset();
 //   while (angle > turnSensor.getTurnAngle()) {
 //     //Read the gyro to update turnAngle, the estimation of how far the robot has turned
 //     //and turnRate, the estimation of how fast it's turning
 //     turnSensor.turnSensorUpdate();
 //     // Calculate the motor turn speed using proportional
 //     // derivative PID terms.  Here we are a using a
 //     // constant of 56 and a derivative constant of 1/20
 //   //  int32_t turnSpeed = -(int32_t)(turnSensor.getTurnAngle()) / (turnAngle1 / 56) - (turnSensor.getTurnRate() )/ 20;
 //     // Constrain our motor speeds to be between -maxSpeed and maxSpeed
 //     turnSpeed = constrain(turnSpeed, -200, 200);
 //     motors.setSpeeds(-turnSpeed, turnSpeed);
 //   }
 // }
 //
 // void Motors::stopRobot() {
 //   motors.setSpeeds(0,0);
 // }
