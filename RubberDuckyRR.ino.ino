#include "Keyboard.h"

void setup() {
  Keyboard.begin();
  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500)

  Keyboard.print("cmd");
  delay(500);

  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500)

  Keyboard.print("start http://www.youtube.com/watch?v=dQw4w9WgXcQ")
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000)

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500)

  Keyboard.end();
}