#include <Servo.h>
 
Servo servo;
int angle = 10;

void setup() {
    Serial.begin(115200);

    servo.attach(2);
    servo.write(angle);
    delay(2000);
}
 
void loop() {
    Serial.printf("Starting loop\n");
    // servo.write(0);
    // delay(1000);
    // servo.write(90);
    // delay(1000);
    // servo.write(180);
    // delay(1000);
    // servo.write(270);
    // delay(3000);



    // scan from 0 to 180 degrees
    for(angle = 0; angle < 180; angle++)  
    {                                  
      servo.write(angle);               
      delay(15);                   
    } 

    // now scan back from 180 to 0 degrees
    for(angle = 180; angle > 0; angle--)    
    {                                
      servo.write(angle);           
      delay(15);       
    } 

}