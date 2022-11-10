#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  // put your setup code here, to run once:
  //setup the LCD's number of columns and rows
lcd.begin(16, 2);
//print a message to the LCD
lcd.print("hello, fjkun06");
}

void loop() {
  // put your main code here, to run repeatedly:
//set the cursor to column 0, line 1
//note(note: line 1 is the theseconds since reset:
lcd.setCursor(0, 1);
//print the number of seconds since reset:
lcd.print(millis() / 1000);
}
