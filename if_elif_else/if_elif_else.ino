#include <ArduinoRobot.h>

void setup() {
  // initialize the robot
  Robot.begin();
}


void loop(){
  boolean A = true;
  boolean B = true;

  if (A) {
    Robot.motorsWrite(100,100);
  }
  if (B) {
    Robot.motorsWrite(-100,-100);
  }
  delay(2000);
}
