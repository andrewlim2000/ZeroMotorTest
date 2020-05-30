#include <Arduino.h>

const int switchPin = 7;
const int motorPin = 9;
int switchState = 0;

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  switchState = digitalRead(switchPin);
  bool zero = false;
  while (!zero) {
    // motor1.drive(slowSpeed);
    digitalWrite(motorPin, HIGH);
    switchState = digitalRead(switchPin);
    if (switchState == LOW) {
      // motor1.brake();
      digitalWrite(motorPin, LOW);
      zero = true;
    }
  }
}

void loop() {

}
