const int Pin_G = 2;
const int Pin_F = 3;
const int Pin_E = 4;
const int Pin_D = 5;
const int Pin_C = 6;
const int Pin_B = 7;
const int Pin_A = 8;
void setup() {
  // put your setup code here, to run once:
pinMode(Pin_A , OUTPUT);
pinMode(Pin_B , OUTPUT);
pinMode(Pin_C , OUTPUT);
pinMode(Pin_D , OUTPUT);
pinMode(Pin_E , OUTPUT);
pinMode(Pin_F , OUTPUT);
pinMode(Pin_G , OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //0
digitalWrite(Pin_A , HIGH);
digitalWrite(Pin_B , HIGH);
digitalWrite(Pin_C , HIGH);
digitalWrite(Pin_D , HIGH);
digitalWrite(Pin_E , HIGH);
digitalWrite(Pin_F , HIGH);
digitalWrite(Pin_G , LOW);
delay(300);
//1

digitalWrite(Pin_A , LOW);
digitalWrite(Pin_B , HIGH);
digitalWrite(Pin_C , HIGH);
digitalWrite(Pin_D , LOW);
digitalWrite(Pin_E , LOW);
digitalWrite(Pin_F , LOW);
digitalWrite(Pin_G , LOW);
delay(300);
  //2
digitalWrite(Pin_A , HIGH);
digitalWrite(Pin_B , HIGH);
digitalWrite(Pin_C , LOW);
digitalWrite(Pin_D , HIGH);
digitalWrite(Pin_E , HIGH);
digitalWrite(Pin_F , LOW);
digitalWrite(Pin_G , HIGH);
delay(300);

  //3
digitalWrite(Pin_A , HIGH);
digitalWrite(Pin_B , HIGH);
digitalWrite(Pin_C , HIGH);
digitalWrite(Pin_D , HIGH);
digitalWrite(Pin_E , LOW);
digitalWrite(Pin_F , LOW);
digitalWrite(Pin_G , HIGH);
delay(300);
  //4
digitalWrite(Pin_A , LOW);
digitalWrite(Pin_B , HIGH);
digitalWrite(Pin_C , HIGH);
digitalWrite(Pin_D , LOW);
digitalWrite(Pin_E , LOW);
digitalWrite(Pin_F , HIGH);
digitalWrite(Pin_G , HIGH);
delay(300);

  //5
digitalWrite(Pin_A , HIGH);
digitalWrite(Pin_B , LOW);
digitalWrite(Pin_C , HIGH);
digitalWrite(Pin_D , HIGH);
digitalWrite(Pin_E , LOW);
digitalWrite(Pin_F , HIGH);
digitalWrite(Pin_G , HIGH);
delay(300);
  //6
digitalWrite(Pin_A , HIGH);
digitalWrite(Pin_B , LOW);
digitalWrite(Pin_C , HIGH);
digitalWrite(Pin_D , HIGH);
digitalWrite(Pin_E , HIGH);
digitalWrite(Pin_F , HIGH);
digitalWrite(Pin_G , HIGH);
delay(300);
  //7
digitalWrite(Pin_A , HIGH);
digitalWrite(Pin_B , HIGH);
digitalWrite(Pin_C , HIGH);
digitalWrite(Pin_D , LOW);
digitalWrite(Pin_E , LOW);
digitalWrite(Pin_F , LOW);
digitalWrite(Pin_G , LOW);
delay(300);

  //8
digitalWrite(Pin_A , HIGH);
digitalWrite(Pin_B , HIGH);
digitalWrite(Pin_C , HIGH);
digitalWrite(Pin_D , HIGH);
digitalWrite(Pin_E , HIGH);
digitalWrite(Pin_F , HIGH);
digitalWrite(Pin_G , HIGH);
delay(300); 
//9
digitalWrite(Pin_A , HIGH);
digitalWrite(Pin_B , HIGH);
digitalWrite(Pin_C , HIGH);
digitalWrite(Pin_D , HIGH);
digitalWrite(Pin_E , LOW);
digitalWrite(Pin_G , HIGH);
digitalWrite(Pin_F , HIGH);
delay(300);
  //8
digitalWrite(Pin_A , HIGH);
digitalWrite(Pin_B , HIGH);
digitalWrite(Pin_C , HIGH);
digitalWrite(Pin_D , HIGH);
digitalWrite(Pin_E , HIGH);
digitalWrite(Pin_F , HIGH);
digitalWrite(Pin_G , HIGH);
delay(300); 
 //7
digitalWrite(Pin_A , HIGH);
digitalWrite(Pin_B , HIGH);
digitalWrite(Pin_C , HIGH);
digitalWrite(Pin_D , LOW);
digitalWrite(Pin_E , LOW);
digitalWrite(Pin_F , LOW);
digitalWrite(Pin_G , LOW);
delay(300);

  //6
digitalWrite(Pin_A , HIGH);
digitalWrite(Pin_B , LOW);
digitalWrite(Pin_C , HIGH);
digitalWrite(Pin_D , HIGH);
digitalWrite(Pin_E , HIGH);
digitalWrite(Pin_F , HIGH);
digitalWrite(Pin_G , HIGH);
delay(300);
 //5
digitalWrite(Pin_A , HIGH);
digitalWrite(Pin_B , LOW);
digitalWrite(Pin_C , HIGH);
digitalWrite(Pin_D , HIGH);
digitalWrite(Pin_E , LOW);
digitalWrite(Pin_F , HIGH);
digitalWrite(Pin_G , HIGH);
delay(300);

  //4
digitalWrite(Pin_A , LOW);
digitalWrite(Pin_B , HIGH);
digitalWrite(Pin_C , HIGH);
digitalWrite(Pin_D , LOW);
digitalWrite(Pin_E , LOW);
digitalWrite(Pin_F , HIGH);
digitalWrite(Pin_G , HIGH);
delay(300);
  //3
digitalWrite(Pin_A , HIGH);
digitalWrite(Pin_B , HIGH);
digitalWrite(Pin_C , HIGH);
digitalWrite(Pin_D , HIGH);
digitalWrite(Pin_E , LOW);
digitalWrite(Pin_F , LOW);
digitalWrite(Pin_G , HIGH);
delay(300);
  //2
digitalWrite(Pin_A , HIGH);
digitalWrite(Pin_B , HIGH);
digitalWrite(Pin_C , LOW);
digitalWrite(Pin_D , HIGH);
digitalWrite(Pin_E , HIGH);
digitalWrite(Pin_F , LOW);
digitalWrite(Pin_G , HIGH);
delay(300);
//1

digitalWrite(Pin_A , LOW);
digitalWrite(Pin_B , HIGH);
digitalWrite(Pin_C , HIGH);
digitalWrite(Pin_D , LOW);
digitalWrite(Pin_E , LOW);
digitalWrite(Pin_F , LOW);
digitalWrite(Pin_G , LOW);
delay(300);
}

