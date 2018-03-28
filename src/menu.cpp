#include "menu.h"

Menu::Menu() {}

int men = 0;
char whichButton();

void Menu::scrollMenu() {

  if(men == 7) {
    men = men - 6;
  }
  switch (whichButton())
    {
    case 'A':
      specificMenu(men);
      break;
    case 'B':
      men++;
      break;
    }
}

void Menu::specificMenu(int men) {
    switch (men) {
      case 1:
        battery.printVoltage();
        break;
      case 2:
        motionTestMotors.MotionTest();
        break;
      case 3:
        //lineTest.LineTest();
        break;
      case 4:
        //proxTest.ProxTest();
        break;
      case 5:
        //soundTest.SoundTest();
        break;
      case 6:
        //fightClub.FightClub();
        break;

    }
}

void Menu::lcdMenu(int num){
  switch (num){
    case 1:
      lcd.clear();
      lcd.print(F("Battery"));
      lcd.gotoXY(0,1);
      lcd.print("A     B->");
      break;
    case 2:
      lcd.clear();
      lcd.print(F("Motor Test"));
      lcd.gotoXY(0,1);
      lcd.print("A     B->");
      break;
    case 3:
      lcd.clear();
      lcd.print(F("Line Test"));
      lcd.gotoXY(0,1);
      lcd.print("A     B->");
      break;
    case 4:
      lcd.clear();
      lcd.print(F("Prox Test"));
      lcd.gotoXY(0,1);
      lcd.print("A     B->");
      break;
    case 5:
      lcd.clear();
      lcd.print(F("Sound Test"));
      lcd.gotoXY(0,1);
      lcd.print("A     B->");
      break;
    case 6:
      lcd.clear();
      lcd.print(F("Fight Club"));
      lcd.gotoXY(0,1);
      lcd.print("A     B->");
      break;
    }

}
char whichButton(){
  if(buttonA.isPressed()){
    return 'A';
  }
  if(buttonB.isPressed()){
    return 'B';
  }
  if(buttonC.isPressed()){
    return 'C';
  }
}
