#include <Servo.h>
#define Servopin 19
Servo servo;
int angle = 10;

void setup() {
  servo.attach(Servopin);
  servo.write(angle);
}


void loop() 
{ 
 // scan from 0 to 180 degrees
  for(angle = 10; angle < 180; angle++)  
  {                                  
    servo.write(angle);               
    delay(15);                   
  } 
  // now scan back from 180 to 0 degrees
  for(angle = 180; angle > 10; angle--)    
  {                                
    servo.write(angle);           
    delay(15);       
  } 
} 
