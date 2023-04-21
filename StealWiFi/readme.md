### StealWiFi

> Author: Ecthor Silva
> Description: Este script pega todas as senhas Wi-Fi salvas no computador e salva em um arquivo.

O script abre o powershell em modo administrador, usa o comando `Start-Service -Name 'wlansvc'` para iniciar o serviço de configuração de rede sem fio do Windows. Após isso cria uma pasta para armazenar os arquivos de configuração de rede sem fio. Ele também usa a data e hora atual para criar um nome exclusivo para a pasta. O comando PowerShell netsh wlan export profile key=clear folder=$fileSaveDir; exit é usado para exportar as configurações de rede sem fio para a pasta recém-criada.

**Nota:** Por algum motivo ao compilar o comando `Compress-Archive -Path $fileSaveDir -DestinationPath '$env:USERPROFILE\ResultsPassword.zip';` junto dos demais o Digispark para de funcionar.

> _Sketch uses 3586 bytes (59%) of program storage space. Maximum is 6012 bytes._ 
> _Global variables use 476 bytes of dynamic memory._