#include <ArduinoRobot.h>

void setup(){
  Robot.begin();
  Robot.beginTFT();
  Serial.begin(9600); //9600 reads per second
}

void loop(){
  int val = map(Robot.knobRead(), 0, 1023, -255, 255);
  Robot.motorsWrite(val,val);

  Robot.updateIR(); //updates the IR array  
  int x = Robot.IRarray[0];
  Robot.text(x, 5,5);
  delay(1000);
  Robot.clearScreen();
  
//  for(int i=0; i < 5; i++){
//    Serial.print(Robot.IRarray[i]);
//    Serial.print(", ");
//  }
//  Serial.println("");
}
