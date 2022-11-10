const int kPinLedY = 12;
const int kPinLedG = 11;
const int kPinLedR = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(kPinLedG , OUTPUT);
  pinMode(kPinLedR , OUTPUT);
  pinMode(kPinLedY , OUTPUT);

}

void loop() {
  digitalWrite(kPinLedR , HIGH);
  delay(2000);
  digitalWrite(kPinLedR , LOW);
  delay(100);
  digitalWrite(kPinLedG , HIGH);
  delay(2000);
  digitalWrite(kPinLedG , LOW);
  delay(100);
  digitalWrite(kPinLedY , HIGH);
  delay(2000);
  digitalWrite(kPinLedY , LOW);
  delay(100);
  // put your main code here, to run repeatedly:

}
