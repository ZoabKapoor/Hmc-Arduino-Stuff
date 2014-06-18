#include <ArduinoRobot.h>

void setup(){
  Robot.begin();
  Robot.beginSpeaker();
  Robot.beginTFT();
  Robot.beginSD();
}

//black is between 0 and 100
void loop(){
  boolean overWhite = true; //by default, we assume robot is over white terrain
  for(int sensor = 0; sensor < 5; sensor++){
    int currentSensor;
    currentSensor = IR_data(sensor);
    Robot.text(currentSensor, 0, 15*sensor);
    if(currentSensor < 120){
      overWhite = false;
    }
  }
  if(overWhite){
    Robot.beep(BEEP_SIMPLE);
  }
  delay(1200);
  Robot.clearScreen();
}

int IR_data(int sensor){
  int result;
  Robot.updateIR();
  result = Robot.IRarray[sensor];
  return result;
}
