#include <ArduinoRobot.h>;

void setup(){
  Robot.begin();
  Robot.beginSpeaker();
  Robot.beginTFT();}
  
void loop(){
  for (int i = 0; i < 10; i++) {
    Robot.beep(BEEP_SIMPLE);
    delay(750); }
  while (true) { }
}
