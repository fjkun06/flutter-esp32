#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define pwm 9
int val = 150;

void setup() {
  // put your setup code here, to run once:
  //setup the LCD's number of columns and rows
lcd.begin(16, 2);
//print a message to the LCD
lcd.setCursor(0, 0);
lcd.print("Ikuzo!!"); //P
analogWrite(pwm, 1);
}

void loop() {
//analogWrite(pwm,val);
//analogWrite (10,0);
delay(10);
}
