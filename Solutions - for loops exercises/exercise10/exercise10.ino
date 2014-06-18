#include <ArduinoRobot.h>;

void setup(){
  Robot.begin();
  Robot.beginSpeaker();
  Robot.beginTFT();}
  
void loop(){
  for (int i = 0; i < 3 ; i++) {
    for (int j = 3; j < 16; j+=3) {
      for (int k = 0; k < j; k++) {
        Robot.beep(BEEP_SIMPLE); }
      delay(750); }
  }
  while (true) { }
}
