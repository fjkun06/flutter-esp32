//#include <LiquidCrystal.h>
//LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
//void setup() {
//  // put your setup code here, to run once:
//  //setup the LCD's number of columns and rows
//lcd.begin(16, 2);
////print a message to the LCD
//lcd.setCursor(0, 0);
//lcd.print("first Voltmeter"); //P
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//////set the cursor to column 0, line 1
////pinMode(A0, INPUT);
////float val=analogRead(A0);
////float V=(val*5)/1023;
////delay(100);
//////note(note: line 1 is the theseconds since reset:
////lcd.setCursor(2, 1);
//////print the number of seconds since reset:
//////lcd.print(millis() / 1000);
////lcd.print("V: ");
////lcd.print(V);
////lcd.print("Volt");
//}


//#include<dht.h>      // Including library for dht
#include "DHT.h"
#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
#define dht_dpin 7
#define DHTTYPE DHT11
DHT dht(dht_dpin, DHTTYPE);
#define pwm 9

byte degree[8] = {
  0b00011,0b00011,0b00000,0b00000, 0b00000,0b00000,0b00000, 0b00000
};
void setup()
{
 lcd.begin(16, 2);
 lcd.createChar(1, degree);
 lcd.clear();
 lcd.print("   Fan Speed  ");
 lcd.setCursor(0,1);
 lcd.print("  Controlling ");
 delay(2000);
 analogWrite(pwm, 255);
 lcd.clear();
 lcd.print("Circuit Digest ");
 delay(2000);
 dht.begin();
}

void loop()
{
//  DHT.read11(dht_dpin);
  int temp=DHT.readTemperature();
  lcd.setCursor(0,0);
  lcd.print("Temperature:");
  lcd.print(temp);   // Printing temperature on LCD
  lcd.write(1);
  lcd.print("C");
  lcd.setCursor(0,1);
  if(temp <26 )
    { 
      analogWrite(9,0);
      lcd.print("Fan OFF            ");
      delay(100);
    }
    else if(temp==26)
    {
      analogWrite(pwm, 51);
      lcd.print("Fan Speed: 20%   ");
      delay(100);
    }
     else if(temp==27)
    {
      analogWrite(pwm, 102);
      lcd.print("Fan Speed: 40%   ");
      delay(100);
    }
     else if(temp==28)
    {
      analogWrite(pwm, 153);
      lcd.print("Fan Speed: 60%   ");
      delay(100);
    }
    else if(temp==29)
    {
      analogWrite(pwm, 204);
      lcd.print("Fan Speed: 80%    ");
      delay(100);
    }
     else if(temp>29)
    {
      analogWrite(pwm, 255);
      lcd.print("Fan Speed: 100%   ");
      delay(100);
    } 
  delay(3000);
}
