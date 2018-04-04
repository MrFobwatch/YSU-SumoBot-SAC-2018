#ifndef MENU_H
#define MENU_H
#include <Zumo32U4.h>
#include "batteryLevel.h"
#include "MotionTest.h"
#include "fightClub.h"
class Menu {
public:
  Menu();
  void scrollMenu();
  void specificMenu(int which);
  void lcdMenu(int num);
};
extern Zumo32U4ButtonB buttonB;
extern Zumo32U4ButtonA buttonA;
extern Zumo32U4ButtonC buttonC;
extern Zumo32U4LCD lcd;
extern Battery battery;
extern Motors motionTestMotors;
#endif
