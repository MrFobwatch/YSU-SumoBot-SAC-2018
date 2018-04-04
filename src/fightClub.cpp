/* This example uses the front proximity sensor on the Zumo 32U4
Front Sensor Array to locate an opponent robot or any other
reflective object. Using the motors to turn, it scans its
surroundings. If it senses an object, it turns on its yellow LED
and attempts to face towards that object. */

#include <Wire.h>
#include <Zumo32U4.h>
#include <fightClub.h>
#include <MotionTest.h>

  // Read the front proximity sensor and gets its left value (the
  // amount of reflectance detected while using the left LEDs)
  // and right value.
  proxSensors.read();
  uint8_t leftValue = proxSensors.countsFrontWithLeftLeds();
  uint8_t rightValue = proxSensors.countsFrontWithRightLeds();

  // Determine if an object is visible or not.
  bool objectSeen = leftValue >= sensorThreshold || rightValue >= sensorThreshold;

  if (objectSeen)
  {
    // An object is visible, so we will start decelerating in
    // order to help the robot find the object without
    // overshooting or oscillating.
    turnSpeed -= deceleration;
  }
  else
  {
    // An object is not visible, so we will accelerate in order
    // to help find the object sooner.
    turnSpeed += acceleration;
  }

  // Constrain the turn speed so it is between turnSpeedMin and
  // turnSpeedMax.
  turnSpeed = constrain(turnSpeed, turnSpeedMin, turnSpeedMax);

  if (objectSeen)
  {
    // An object seen.
    ledYellow(1);

    lastTimeObjectSeen = millis();

    bool lastTurnRight = turnRight;

    if (leftValue < rightValue)
    {
      // The right value is greater, so the object is probably
      // closer to the robot's right LEDs, which means the robot
      // is not facing it directly.  Turn to the right to try to
      // make it more even.
      turnRight();
      senseDir = RIGHT;
    }
    else if (leftValue > rightValue)
    {
      // The left value is greater, so turn to the left.
      turnLeft();
      senseDir = LEFT;
    }
    else
    {
      // The values are equal, so stop the motors.
      stop();
    }
  }
  else
  {
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
