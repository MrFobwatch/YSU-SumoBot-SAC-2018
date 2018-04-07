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
        engine.MotorTest();
        break;
      case 3:
        //lineTest.LineTest();
        break;
      case 4:
        //proxTest.ProxTest();
        break;
      case 5:
        buzzer.play(jeopardy);
        while(buzzer.isPlaying());
        break;
      case 6:
        for(int i = 1; i<= 4; i++) {
        buzzer.playNote(NOTE_G(4),60, 15);
        delay(1000);
        }
        buzzer.playNote(NOTE_G(5),120,15);
      fighter.fightClub();
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
  return 0;
}
