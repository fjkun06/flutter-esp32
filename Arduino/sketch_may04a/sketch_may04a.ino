const int kPinLedG1 = 10;
const int kPinLedR1 = 9;
const int kPinLedY1 = 8;
const int kPinLedG2 = 13;
const int kPinLedR2 = 12;
const int kPinLedY2 = 11;
const int kPinLedG3 = 5;
const int kPinLedR3 = 6;
const int kPinLedY3 = 7;
const int kPinLedG4 = 4;
const int kPinLedR4 = 3;
const int kPinLedY4 = 2;
void setup() {
  // put your setup code here, to run once:
  //set1
  pinMode(kPinLedG1 , OUTPUT);
  pinMode(kPinLedR1 , OUTPUT);
  pinMode(kPinLedY1 , OUTPUT);

//set2
  pinMode(kPinLedG2 , OUTPUT);
  pinMode(kPinLedR2 , OUTPUT);
  pinMode(kPinLedY2 , OUTPUT);

//set3
  pinMode(kPinLedG3 , OUTPUT);
  pinMode(kPinLedR3 , OUTPUT);
  pinMode(kPinLedY3 , OUTPUT);

 //set4
  pinMode(kPinLedG4 , OUTPUT);
  pinMode(kPinLedR4 , OUTPUT);
  pinMode(kPinLedY4 , OUTPUT);
}

void loop() {
 //bulb 1 and 4 show green at same time while 2 and 3 show red 
  digitalWrite(kPinLedG1 , HIGH);
  digitalWrite(kPinLedG4 , HIGH);
  digitalWrite(kPinLedR2 , HIGH);
  digitalWrite(kPinLedR3 , HIGH);
  delay(2000);//stays like so  for 2000 milliseconds

  //bulb 1  and 4 green light gets off
  digitalWrite(kPinLedG1 , LOW);
  digitalWrite(kPinLedG4 , LOW);
  delay(100);//100 milliseconds delay before  turning to yellow light

   //bulb 1 and 4 show yellow at same time
  digitalWrite(kPinLedY1 , HIGH);
  digitalWrite(kPinLedY4 , HIGH);
  delay(1000);//stays yellow  for 1000 milliseconds

  //bulb 1  and 4 yellow light gets off and bulbs 2 and 3 red light goes off 
  digitalWrite(kPinLedY1 , LOW);
  digitalWrite(kPinLedY4 , LOW);
  digitalWrite(kPinLedR2 , LOW);
  digitalWrite(kPinLedR3 , LOW);
  delay(100);
  
  //bulb 1 and 4 show red at same time and 2 and 3 shows green
   digitalWrite(kPinLedG2 , HIGH);
  digitalWrite(kPinLedG3 , HIGH);
  digitalWrite(kPinLedR1 , HIGH);
  digitalWrite(kPinLedR4 , HIGH);
  delay(2000); //stays so  for 2000 milliseconds

  // bulb  2 and 3 green gets off and switch to yellow
  digitalWrite(kPinLedG2 , LOW);
  digitalWrite(kPinLedG3 , LOW);
  digitalWrite(kPinLedY2 , HIGH);
  digitalWrite(kPinLedY3 , HIGH);
  delay(1000);
  delay(100);//100 milliseconds before  1 and 4 turns green

//bulb 1 and 4 red goes  off  
 digitalWrite(kPinLedR1 , LOW);
  digitalWrite(kPinLedR4 , LOW);
  digitalWrite(kPinLedY2 , LOW);
   digitalWrite(kPinLedY3 , LOW);
  delay(100);


}
