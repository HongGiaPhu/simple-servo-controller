#include <Servo.h>
#define button 8

Servo sv;

void setup() {
  sv.attach(9);
  sv.write(0);
  pinMode(button,INPUT);
}

void loop() {
  if(digitalRead(button) == HIGH)
    sv.write(150);
  else
    sv.write(0);
  delay(10);
}
