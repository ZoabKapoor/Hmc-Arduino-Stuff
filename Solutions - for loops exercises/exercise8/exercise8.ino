#include <ArduinoRobot.h>;

void setup(){
  Robot.begin();
  Robot.beginSpeaker();
  Robot.beginTFT();}
  
void loop(){
  for (int i = 0; i < 5 ; i++) {
    for (int j = 0; j < 5; j++) {
      for (int k = 0; k <= 4-j; k++) {
        Robot.beep(BEEP_SIMPLE); }
      delay(750); } }
  while (true) { }
}
