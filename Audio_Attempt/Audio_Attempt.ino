#include <ArduinoRobot.h>

void setup(){
  Robot.begin();
  Robot.beginTFT();//Initialize the TFT module
  Robot.beginSpeaker();
}

void loop(){
  Robot.clearScreen();
  Robot.text("starting!!!!", 20, 20);
  
  Robot.motorsWrite(255,255);
  delay(2000);
  Robot.motorsWrite(0,0);
  delay(2000);
  Robot.motorsWrite(-255,-255);
  delay(2000);
  
  Robot.clearScreen();
  Robot.text("finished!!", 20, 20);
  delay(1000);
  /*  Robot.text("Robot",0,0);
  delay(2000);
  Robot.clearScreen();
  Robot.text("controls",0,0);
  delay(2000);
  Robot.clearScreen();
  Robot.text("all!",0,0);
  delay(2000);
  Robot.clearScreen();
*/
}
