#include <ArduinoRobot.h>;

void setup(){
  Robot.begin();
  Robot.beginSpeaker();
  Robot.beginTFT();}
  
void loop(){
  for (int i = 0; i < 5 ; i++) {
    for (int j = 4; j < 10; j++) {
      if (j <= 5) {
        for (int k = 0; k < j; k++) {
          Robot.beep(BEEP_SIMPLE); }
        delay(750);
      } else {
        for (int k = 0; k < (10-j); k++) {
          Robot.beep(BEEP_SIMPLE); }
     delay(750); } } }
   while (true) { }
}
