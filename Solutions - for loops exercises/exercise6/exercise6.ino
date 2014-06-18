#include <ArduinoRobot.h>;

void setup(){
  Robot.begin();
  Robot.beginSpeaker();
  Robot.beginTFT();}
  
void loop(){
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      Robot.beep(BEEP_SIMPLE); 
      Robot.beep(BEEP_SIMPLE);
      delay(750); }
    delay(750);
    delay(750);
    for (int j = 0; j < 5; j++) {
      Robot.beep(BEEP_SIMPLE); 
      Robot.beep(BEEP_SIMPLE); 
      Robot.beep(BEEP_SIMPLE); 
      delay(750); }
    delay(750);
    }
   while (true) { }
}
