#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(4);

void Forward(){
  Serial.print("Forwards");
      
      motor1.run(FORWARD);
      motor2.run(FORWARD);
      for (int i=0; i<255; i++) {
        motor1.setSpeed(i);  
        motor2.setSpeed(i);  
        delay(10);
        }
   
      for (int i=255; i!=0; i--) {
        motor1.setSpeed(i);  
        motor2.setSpeed(i);  
        delay(10);
        }
}

void Backward(){
  Serial.print("Backwards");

     motor1.run(BACKWARD);
     motor2.run(BACKWARD);
      for (int i=0; i<255; i++) {
        motor1.setSpeed(i);
        motor2.setSpeed(i); 
        delay(10);
        }
 
     for (int i=255; i!=0; i--) {
       motor1.setSpeed(i);
       motor2.setSpeed(i); 
       delay(10);
       }
  }
void Left(){
    Serial.print("Left");

     motor1.run(BACKWARD);
     motor2.run(FORWARD);
      for (int i=0; i<255; i++) {
        motor1.setSpeed(i);
        motor2.setSpeed(i); 
        delay(10);
        }
 
     for (int i=255; i!=0; i--) {
       motor1.setSpeed(i);
       motor2.setSpeed(i); 
       delay(10);
       }
  }
void Right(){
    Serial.print("Right");

     motor1.run(FORWARD);
     motor2.run(BACKWARD);
      for (int i=0; i<255; i++) {
        motor1.setSpeed(i);
        motor2.setSpeed(i); 
        delay(10);
        }
 
     for (int i=255; i!=0; i--) {
       motor1.setSpeed(i);
       motor2.setSpeed(i); 
       delay(10);
       }
}

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor test!");
  
  // turn on motor
  motor1.setSpeed(200);
 
  motor1.run(RELEASE);
}

void loop() {
  Forward();

  Backward();

  Left();

  Right();

}
