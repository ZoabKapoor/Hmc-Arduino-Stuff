
#include <ArduinoRobot.h>;

void setup() {
  Robot.begin();
  Robot.beginTFT();
}


int glob = 1;

void loop() {
  if (glob == 1) {
 Robot.text("Hello, world!",0,0);
 glob = 0;
 delay(500);
 Robot.text("OK!", 0,0);
}
}
