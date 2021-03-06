#include "menu.h"

Menu::Menu() {}

int men = 1;
char whichButton();


void Menu::scrollMenu() {
  if(men == 7) {
    men = men - 6;
  }
  else if(men==0){
    men = men + 6;
  }

  lcdMenu(men);
  delay(300);
  whichButton();


    switch (whichButton())
      {
      case 'A':
        men--;
        break;
      case 'B':
        specificMenu(men);
        break;
      case 'C':
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
      lcd.print(F("Bttry[B]"));
      lcd.gotoXY(0,1);
      lcd.print("<-A  C->");
      break;
    case 2:
      lcd.clear();
      lcd.print(F("Motor[B]"));
      lcd.gotoXY(0,1);
      lcd.print("<-A  C->");
      break;
    case 3:
      lcd.clear();
      lcd.print(F("Line [B]"));
      lcd.gotoXY(0,1);
      lcd.print("<-A  C->");
      break;
    case 4:
      lcd.clear();
      lcd.print(F("Prox [B]"));
      lcd.gotoXY(0,1);
      lcd.print("<-A  C->");
      break;
    case 5:
      lcd.clear();
      lcd.print(F("Sound[B]"));
      lcd.gotoXY(0,1);
      lcd.print("<-A  C->");
      break;
    case 6:
      lcd.clear();
      lcd.print(F("Fight[B]"));
      lcd.gotoXY(0,1);
      lcd.print("<-A  C->");
      break;
    }

}


char whichButton(){
  while(!buttonA.isPressed() && !buttonB.isPressed() && !buttonC.isPressed()){
    delay(5);
  }
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
