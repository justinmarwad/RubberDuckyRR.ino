#include "Keyboard.h"

void setup() {
  Keyboard.begin();
  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);

  Keyboard.print("http://www.youtube.com/watch?v=dQw4w9WgXcQ");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.end();
}

void loop() {}