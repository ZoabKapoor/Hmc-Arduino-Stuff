#include <ArduinoRobot.h>;

void setup(){
  Robot.begin();
  Robot.beginSpeaker();
  Robot.beginTFT();}
  
void loop(){
  for (int i = 0; i < 5 ; i++) {
    for (int j = 1; j < 10; j*=2) {
      for (int k = 0; k < j; k++) {
        Robot.beep(BEEP_SIMPLE); }
      delay(750); }
  }
  while (true) { }
}
