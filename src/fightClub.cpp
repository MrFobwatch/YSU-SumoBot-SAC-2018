/* This example uses the front proximity sensor on the Zumo 32U4
Front Sensor Array to locate an opponent robot or any other
reflective object. Using the motors to turn, it scans its
surroundings. If it senses an object, it turns on its yellow LED
and attempts to face towards that object. */

#include <Wire.h>
#include <Zumo32U4.h>
#include <fightClub.h>



const uint8_t sensorThreshold = 1;

const uint16_t turnSpeedMax = 250;

const uint16_t turnSpeedMin = 100;

const uint16_t deceleration = 30;

const uint16_t acceleration = 10;

#define LEFT 0
#define RIGHT 1

bool senseDir = RIGHT;

bool turningLeft = false;

bool turningRight = false;

uint16_t turnSpeed = turnSpeedMax;

uint16_t lastTimeObjectSeen = 0;

void turnRight()
{
  motors.setSpeeds(turnSpeed,-turnSpeed);
  turningLeft = false;
  turningRight = true;
}

void turnLeft()
{
  motors.setSpeeds(-turnSpeed,turnSpeed);
  turningLeft = true;
  turningRight = false;
}

void stop()
{
  motors.setSpeeds(0, 0);
  turningLeft = false;
  turningRight = false;
}

void Fight::fightClub() {

  proxSensors.initFrontSensor();
  while(1){
  proxSensors.read();

  uint8_t leftValue = proxSensors.countsFrontWithLeftLeds();
  uint8_t rightValue = proxSensors.countsFrontWithRightLeds();

  // Determine if an object is visible or not.
  bool objectSeen = leftValue >= sensorThreshold || rightValue >= sensorThreshold;

  if (objectSeen) {
    // An object is visible, so we will start decelerating in
    // order to help the robot find the object without
    // overshooting or oscillating.
    turnSpeed -= deceleration;
  }
  else {
    // An object is not visible, so we will accelerate in order
    // to help find the object sooner.
    turnSpeed += acceleration;
  }

  // Constrain the turn speed so it is between turnSpeedMin and
  // turnSpeedMax.
  turnSpeed = constrain(turnSpeed, turnSpeedMin, turnSpeedMax);

  if (objectSeen) {
    // An object seen.
    ledYellow(1);

    lastTimeObjectSeen = millis();

    bool lastTurnRight = turnRight;

      if (leftValue < rightValue) {
        // The right value is greater, so the object is probably
        // closer to the robot's right LEDs, which means the robot
        // is not facing it directly.  Turn to the right to try to
        // make it more even.
        turnRight();
        senseDir = RIGHT;
      }
      else if (leftValue > rightValue) {
        // The left value is greater, so turn to the left.
        turnLeft();
        senseDir = LEFT;
      }
      else {
        // The values are equal, so stop the motors.
        delay(100);
        motors.setSpeeds(100,100);
      }
    }
  else {
    // No object is seen, so just keep turning in the direction
    // that we last sensed the object.
    ledYellow(0);

      if (senseDir == RIGHT)
      {
        turnRight();
      }
      else
      {
        turnLeft();
      }


}
lcd.gotoXY(0, 0);
lcd.print(leftValue);
lcd.print(' ');
lcd.print(rightValue);
lcd.gotoXY(0, 1);
lcd.print(turningRight ? 'R' : (turningLeft ? 'L' : ' '));
lcd.print(' ');
lcd.print(turnSpeed);
lcd.print(' ');
lcd.print(' ');
}
}
//extern Zumo32U4ProximitySensors proxSensors;
