#include <ArduinoRobot.h>;

void setup() {
  Robot.begin();}
  
 void doonce() {
   Robot.motorsWrite(255,255);
   delay(500);
   Robot.motorsWrite(0,0);
   delay(500);
 }
 
 
int glob = 1;
  
void loop(){
  
  if (glob == 1) {
     doonce();
     glob = 0;
  }
  
  /*
Robot.motorsWrite(255,255);
delay(500);
Robot.motorsWrite(0,0);
delay(500);
Robot.motorsWrite(-255,-255);
delay(500);
Robot.motorsWrite(0,0);
delay(500);
*/
}
