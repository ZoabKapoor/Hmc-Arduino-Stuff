#include <ArduinoRobot.h>

void setup() {
  // initialize the robot
  Robot.begin();
  Robot.beginSpeaker();
  Robot.beginTFT();//Initialize the TFT module
}


void loop(){
Robot.motorsWrite(150,150);
delay(2000);
Robot.motorsWrite(0,0);
delay(700);
//Robot.beep(BEEP_SIMPLE);
//delay(500);
Robot.motorsWrite(-150,-150);
delay(2000);
Robot.motorsWrite(0,0);
delay(700);
//Robot.beep(BEEP_DOUBLE);
//delay(500);
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
