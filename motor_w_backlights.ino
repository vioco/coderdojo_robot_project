#include <AFMotor.h>
AF_DCMotor motor1(1);
AF_DCMotor motor2(4);
int moveDuration = 1000;
 void Forward(){
  Serial.print("Forwards");
      
      motor1.run(FORWARD);
      motor2.run(FORWARD);
      motor1.setSpeed(255);
      motor2.setSpeed(255);
      delay(moveDuration);
      motor1.setSpeed(0);
      motor2.setSpeed(0);
 }

 void Backward(){
  Serial.print("Backwards");
     digitalWrite(13, HIGH);
     motor1.run(BACKWARD);
     motor2.run(BACKWARD);
     motor1.setSpeed(255);
     motor2.setSpeed(255);
     delay(moveDuration);
     motor1.setSpeed(0);
     motor2.setSpeed(0);
     digitalWrite(13, LOW);
 }
 void Left(){
    Serial.print("Left");
     digitalWrite(10, HIGH);
     motor1.run(BACKWARD);
     motor2.run(FORWARD);
     motor1.setSpeed(255);
     motor2.setSpeed(255);
     delay(moveDuration);
     motor1.setSpeed(0);
     motor2.setSpeed(0);
     digitalWrite(10, LOW);
 }
 void Right(){
    Serial.print("Right");
     digitalWrite(9, HIGH);
     motor1.run(FORWARD);
     motor2.run(BACKWARD);
     motor1.setSpeed(255);
     motor2.setSpeed(255);
     delay(moveDuration);
     motor1.setSpeed(0);
     motor2.setSpeed(0);
     digitalWrite(9, LOW);
 }

void setup() {
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor test!");
  // turn on motor
  motor1.setSpeed(200);
 
  motor1.run(RELEASE);
}

void loop() {
  moveDuration = 4000;
  Forward();
  moveDuration = 2000;
  Right();
  moveDuration = 4000;
  Backward();
  moveDuration = 2000;
  Left();


}
