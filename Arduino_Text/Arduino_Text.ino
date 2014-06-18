#include <ArduinoRobot.h>

void setup(){
  Robot.begin();
  Robot.beginTFT();//Initialize the TFT module
}

void loop(){
  Robot.text("Robot",0,0);
  delay(2000);
  Robot.clearScreen();
  Robot.text("controls",0,0);
  delay(2000);
  Robot.clearScreen();
  Robot.text("all!",0,0);
  delay(2000);
  Robot.clearScreen();
}
