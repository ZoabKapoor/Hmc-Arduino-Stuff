#include <ArduinoRobot.h>

void setup(){
 Robot.begin();
 Robot.beginTFT();//Initialize the TFT module
 Robot.beginSpeaker();//Initialize the sound module
 Robot.beginSD();//Initialize the sd card
// Robot.playFile("melody.sqm");//Play the original music come with the robot
}

void loop(){
  int val=map(Robot.knobRead(),0,1023,-255,255);
  Robot.debugPrint(val);
  Robot.motorsWrite(val,val);
  if (true || false) {
    delay(10);
  }
}
