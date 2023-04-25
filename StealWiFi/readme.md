### Steal Wi-Fi Password

> Author: Ecthor Silva  
> Description: Este script pega todas as senhas Wi-Fi salvas no computador e salva em um arquivo .zip e envia para um servidor do discord através de Webhook.

Esse código para Digispark simula uma HID (Human Interface Device) que executa um script automatizado para download e execução de um arquivo PowerShell remoto. Ele usa a biblioteca "DigiKeyboardPtBr" para enviar comandos de teclado ao computador hospedeiro.

#### Como usar?

O script.ps1 não é plug and play, você precisará alterar o URL do Webhook (Linha 12) e fazer o upload na internet para adicionar o link na codigo do digispark (Linha 18).

#### Características

- Abre o powershell usando o comando Win + R;  
- Após isso ele abre o powershell com privilégios de administrador usando o comando `powershell Start-Process powershell -Verb runAs; exit` e logo se encerra;  
- Usa o comando Alt + Y para confirmar a abertura do powershell como administrador;  
- No powershell com privilégios de administrador ele baixa o `script.ps1`, executa e finaliza a janela logo em seguida;  
- O `script.ps1` simplesmente exporta os perfis Wi-Fi do sistema operacional Windows e envia para um canal no discord através de um Webhook;  
- Após isso ele repete os três primeiros passos e executa o comando `Remove-Item $output; exit` para apagar o script criado e encerrar a tela do powershell.  

> _Sketch uses 3634 bytes (60%) of program storage space. Maximum is 6012 bytes._  
> _Global variables use 456 bytes of dynamic memory._