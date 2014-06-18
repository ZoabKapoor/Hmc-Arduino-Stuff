#include <ArduinoRobot.h>

void setup(){
  Robot.begin();
  Robot.beginSpeaker();//Initialize the sound module
}

void loop(){
  char aTinyMelody[] = "4e.e.e.c.e---g";// This is what we will play
  Robot.playMelody(aTinyMelody);// Play the melody
  while (true) { }
}
