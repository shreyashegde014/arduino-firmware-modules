#include <Servo.h>
Servo hegde_servo;
int const pin=10;
int angle=45;
void setup() {
  hegde_servo.attach(pin);
  hegde_servo.write(angle);
}
void loop() { 
    for(angle=45; angle<=200; angle+=10){
      hegde_servo.write(angle);
      delay(250);
    }
    for(angle=200; angle>=45; angle-=3){
      hegde_servo.write(angle);
      delay(150);
    }
}
