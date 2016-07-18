#include "CocoKeyboard.h"

//cocokeyboard example

char key[] = {'I','Y','O','K','K','K','K','K','O','O','O','O','O'};

int note;

void setup() {
  
  
  
  // don't need to set anything up to use CocoKeyboard
}


void loop() {
  
  note = random(0,12);
String randomString(key[note]);

  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  CocoKeyboard.sendKeyStroke(0);
  
  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
  
  CocoKeyboard.print(randomString);
  
  // It's better to use CocoKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
  CocoKeyboard.delay(500);
}
