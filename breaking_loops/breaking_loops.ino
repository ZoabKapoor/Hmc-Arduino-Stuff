#include <ArduinoRobot.h>

void setup() {
  // initialize the robot
  Robot.begin();
  Robot.beginSpeaker();
}


void loop(){
while(true){
Robot.motorsWrite(100,255);
delay(500);
Robot.beep(BEEP_SIMPLE);
delay(100);
Robot.motorsWrite(-100,-255);
delay(500);
break;}
Robot.beep(BEEP_DOUBLE);
delay(100);
Robot.beep(BEEP_DOUBLE);
delay(100);
Robot.beep(BEEP_DOUBLE);
delay(100);
Robot.beep(BEEP_DOUBLE);
delay(100);
}

//void loop(){
//  // move forward for one second
//  Robot.motorsWrite(255,255);
//  delay(500);
//
//  Robot.motorsWrite(0,0); // stop moving
//  delay(1000);
//
//Robot.beep(BEEP_DOUBLE);
//
//  // move backwards for one second
//  Robot.motorsWrite(-255,-255);
//  delay(1000);
//
//  Robot.motorsWrite(0,0); // stop moving
//  delay(1000);
//  
//  Robot.beep(BEEP_SIMPLE);
//
//}
