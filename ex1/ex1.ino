#include <ArduinoRobot.h>

void setup() {
  Robot.begin();
  Robot.beginSpeaker();
  Robot.beginTFT();
}

void loop() {
  Robot.setTextSize(1);
  Robot.text("Hello, World!",10,10);
  Robot.clearScreen();
  delay(2000);
  Robot.text("Let's count to 10:",10,10);
  delay(1000);
  Robot.clearScreen();
  Robot.setTextSize(3);
  for (int i = 0; i <  10 ; i++) {
     Robot.text(10-i,20,20);
     for (int j = 0; j < i; j++) {
         Robot.beep(BEEP_SIMPLE); }
     delay(1000);
     Robot.clearScreen(); }
   Robot.text("KABOOM!",10,20);
   delay(1000);
   Robot.clearScreen();
   delay(3000);
   while (true) { }
}
