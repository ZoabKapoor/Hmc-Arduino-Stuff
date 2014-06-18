#include<ArduinoRobot.h>
void setup(){ 
Robot.begin();
Robot.beginSpeaker();
Robot.beginTFT();
}

void loop() {
while(true){
  Robot.motorsWrite(200,200);
  Robot.beep(BEEP_LONG);
  Robot.motorsWrite(0,0);
  int key = Robot.keyboardRead();
  if(key == BUTTON_MIDDLE) {
    while(true){
      }
    }
  delay(200);
  }
}
