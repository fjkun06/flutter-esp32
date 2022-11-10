const int buttonPin = 2;
const int ledPin = 3;

int buttonState = 0;

#include <LiquidCrystal.h>
LiquidCrystal lcd(9,8,7,6,5,4);
void setup() {
  // put your setup code here, to run once:
  //setup the LCD's number of columns and rows
 lcd.begin(16, 2);
////print a message to the LCD
lcd.setCursor(0, 0);
 //P

//setting button pinmodes
pinMode(ledPin , OUTPUT);

pinMode(buttonPin , INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//set the cursor to column 0, line 1
buttonState = digitalRead(buttonPin);
if(buttonState  == HIGH){
  digitalWrite(ledPin , HIGH);
 lcd.print("Group3 Voltmeter");
delay(500);

//setting up pin
  pinMode(A0, INPUT);
float val=analogRead(A0);
float V=(val*5)/1024;
delay(100);
//note(note: line 1 is the theseconds since reset:
lcd.setCursor(2, 1);
//print the number of seconds since reset:
//lcd.print(millis() / 1000);
lcd.print("V: ");
lcd.print(V);
lcd.print("V              ");
}
else{
digitalWrite(ledPin , LOW);
lcd.clear();
}

}
