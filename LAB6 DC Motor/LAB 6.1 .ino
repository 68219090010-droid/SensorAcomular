//LAB 6.1 DC Motor
//https://app.cirkitdesigner.com/project/a576fa5c-647b-4522-a139-9ffb237c96ab
#define motorPin 9


void setup() {
 pinMode(motorPin,OUTPUT);
}


void loop() {
  digitalWrite(motorPin,1);
  delay(2000);
  digitalWrite(motorPin,0);
  delay(2000);
}'
