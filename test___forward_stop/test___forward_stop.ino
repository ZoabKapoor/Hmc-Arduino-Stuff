#include <ArduinoRobot.h>

void setup(){
  Robot.begin();
}

void loop(){
  Robot.motorsWrite(150, 150);
  delay(100);
  while(true){
    Robot.motorsWrite(0,0);
  }
}
