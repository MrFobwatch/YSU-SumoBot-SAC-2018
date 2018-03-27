#ifndef MENU_H
#define MENU_H
#include <Zumo32U4.h>


class Menu {
public:
  Menu();
  void scrollMenu();
  void specificMenu(int which);
  void lcdMenu(int num);
};
extern Zumo32U4Encoders encoders;
extern Zumo32U4Motors motors;
extern Zumo32U4ButtonB buttonB;
extern Zumo32U4ButtonA buttonA;
extern Zumo32U4LCD lcd;
#endif
