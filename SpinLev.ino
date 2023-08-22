#include <Servo.h>

Servo motor;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(115200);
  
  motor.attach(5);
  motor.writeMicroseconds(2000);
  delay(50);
  motor.writeMicroseconds(1000);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:

  while(Serial.available() == 0){}

  int speed = Serial.parseInt();

  if(speed >= 1000 && speed <= 2500)
  {
    motor.writeMicroseconds(speed);
  }

}
