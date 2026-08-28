#include "src/userUsbHidKeyboardMouse/USBHIDKeyboardMouse.h"

const int BTN_QUOTE1 = 31;
const int BTN_QUOTE2 = 32;
const int BTN_MACRO  = 33;
const int LED_PIN    = 34;

const char* Quotes1[] = {
  "All we have to decide is what to do with the time that is given us"
};

const char* Quotes2[] = {
  "The courtesy of your hall is somewhat lessened of late",
  "I don't know half of you half as well as I should like; and I like less than half of you half as well as you deserve"
};

const int NUM_QUOTES1 = sizeof(Quotes1) / sizeof(Quotes1[0]);
const int NUM_QUOTES2 = sizeof(Quotes2) / sizeof(Quotes2[0]);

bool btn1Prev = false;
bool btn2Prev = false;
bool btn3Prev = false;

void setup() {
  USBInit();
  
  pinMode(BTN_QUOTE1, INPUT_PULLUP);
  pinMode(BTN_QUOTE2, INPUT_PULLUP);
  pinMode(BTN_MACRO, INPUT_PULLUP);
  
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  bool btn1Press = !digitalRead(BTN_QUOTE1);
  if (btn1Prev != btn1Press) {
    btn1Prev = btn1Press;
    if (btn1Press) {
      digitalWrite(LED_PIN, HIGH);
      
      int index = rand() % NUM_QUOTES1;
      for (int i = 0; Quotes1[index][i] != '\0'; i++) {
        Keyboard_press(Quotes1[index][i]);
        delay(5);
        Keyboard_release(Quotes1[index][i]);
      }
      Keyboard_press('\n');
      delay(5);
      Keyboard_release('\n');
      
      digitalWrite(LED_PIN, LOW);
    }
  }

  bool btn2Press = !digitalRead(BTN_QUOTE2);
  if (btn2Prev != btn2Press) {
    btn2Prev = btn2Press;
    if (btn2Press) {
      digitalWrite(LED_PIN, HIGH);
      
      int index = rand() % NUM_QUOTES2;
      for (int i = 0; Quotes2[index][i] != '\0'; i++) {
        Keyboard_press(Quotes2[index][i]);
        delay(5);
        Keyboard_release(Quotes2[index][i]);
      }
      Keyboard_press('\n');
      delay(5);
      Keyboard_release('\n');
      
      digitalWrite(LED_PIN, LOW);
    }
  }

  bool btn3Press = !digitalRead(BTN_MACRO);
  if (btn3Prev != btn3Press) {
    btn3Prev = btn3Press;
    if (btn3Press) {
      digitalWrite(LED_PIN, HIGH);

      Keyboard_press(KEY_LEFT_CTRL);
      Keyboard_press('c');
      delay(50);
      Keyboard_release('c');
      Keyboard_release(KEY_LEFT_CTRL);
      
      digitalWrite(LED_PIN, LOW);
    }
  }

  delay(50);
}