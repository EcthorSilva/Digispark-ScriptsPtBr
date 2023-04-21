#include "DigiKeyboardPtBr.h"

void setup(){
  //empity
}
void loop(){
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.print("powershell");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(2000);
  DigiKeyboardPtBr.print("Oh inferno");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  for (;;){/*empty*/}
}
