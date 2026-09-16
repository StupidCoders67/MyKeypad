#include <Keyboard.h>
int s1;
int s2;
int s3;
void setup() {
 pinMode(11,INPUT);
 pinMode(10,INPUT);
 pinMode(9,INPUT); 
}
void loop() {
  s1 = digitalRead(11);
  s2 = digitalRead(10);
  s3 = digitalRead(9);
  if (s1 == HIGH) {
    Keyboard.press('T');
    delay(50);
    Keyboard.release('T');
    Keyboard.print("Helloooo!!!");
  }
  if (s2 == HIGH) {
    Keyboard.press('T');
    delay(50);
    Keyboard.release('T');
    Keyboard.print("/back");
  }
  if (s3 == HIGH) {
    Keyboard.press('t');
    delay(50);       
    Keyboard.release('t');
    Keyboard.print("/spawn");
    delay(50);
    Keyboard.print("/sg");
  }
}
