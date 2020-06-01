/*
 *      Description: Leçon 7 Passive buzzer
 *      Created: 08-03-20 | Revision: --
 *      Compilater: Arduino IDE.
 *      Compilation:    
 *      Execution:  
 *      Author:  Samuel Jacquet
 */

#include "pitches.h"
 
// notes in the melody:
int melody[] = {NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
int duration = 500;  // 500 miliseconds
 
void setup() {
 
}
 
void loop() {  
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond
    tone(8, melody[thisNote], duration);

    // Output the voice after several minutes
    delay(150);
  }
   
  // restart after two seconds 
  delay(2000);
}
