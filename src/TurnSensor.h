// #ifndef TURNSENSOR_H
// #define TURNSENSOR_H
// #include <Zumo32U4.h>
//
// // This constant represents a turn of 45 degrees.
// const int32_t turnAngle45 = 0x20000000;
// // This constant represents a turn of 90 degrees.
// const int32_t turnAngle90 = turnAngle45 * 2;
// // This constant represents a turn of approximately 1 degree.
// const int32_t turnAngle1 = (turnAngle45 + 22) / 45;
//
// class TurnSensor {
// public:
//   TurnSensor();
//   void turnSensorSetup();
//   void turnSensorReset();
//   void turnSensorUpdate();
//   uint32_t getTurnAngle();
//   int16_t getTurnRate();
//   uint32_t turnAngle;
//   int16_t turnRate;
//   int16_t gyroOffset;
//   uint16_t gyroLastUpdate;
// };
//
// extern L3G gyro;
//
// #endif /* end of include guard: TURNSENSOR_H */
