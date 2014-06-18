#include<ArduinoRobot.h>

void setup(){
Robot.begin();
}

void loop(){
Robot.motorsWrite(100,100);
delay(500);
Robot.motorsWrite(-100,-100);
delay(500);
}

