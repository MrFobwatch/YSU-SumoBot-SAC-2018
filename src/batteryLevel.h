#ifndef BATTERYLEVEL_H
#define BATTERYLEVEL_H
#include <Zumo32U4.h>

class Battery {
public:
  Battery();
  void printVoltage();
};

extern Zumo32U4ButtonB buttonB;
extern Zumo32U4LCD lcd;
#endif /* end of include guard: BATTERYLEVEL_H */
