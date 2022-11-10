//const int Pin_G = 6;
//const int Pin_F = 5;
//const int Pin_E = 4;
//const int Pin_D = 3;
//const int Pin_C = 2;
//const int Pin_B = 1;
//const int Pin_A = 0;

const unsigned short DIGIT[]={0x7E,0x30,0x6D,0x79,0x33,0x5B,0x5F,0x70,0x7F,0xFB};
void setup() {
  // unsigned short counter

  DDRD = 0b1111111;

}

void loop() {
  static byte COUNTER =0;
  // put your main code here, to run repeatedly:
PORTD=DIGIT[COUNTER];
COUNTER++;
delay(500);
if(COUNTER == 10) {
  COUNTER  = 0;
}
}
