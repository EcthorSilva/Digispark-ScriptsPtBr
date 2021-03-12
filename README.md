# Digispark-ScriptsPtBr
###### Scripts para serem usados no Digispark com propósitos estudantis (for studying purposes).

Iniciei este repositório com o intuito de coletar, modificar e aperfeiçoar scripts existentes para o ATTINY85 Digispark.

Ao longo deste desenvolvimento irei me basear em repositórios já existentes, tanto nacionais como internacionais, justamente para aperfeiçoar algumas técnicas e também trazer alguns scripts para o teclado Pt-Br.

_Todos os créditos serão atribuídos no final deste README.md_

# Instalação

Este é um guia rapido para iniciar o ambiente de desenvolvimento caso queira ajudar ou testar o projeto.

1. Instale os [drivers](https://github.com/digistump/DigistumpArduino/releases) do Arduino

2. Instale IDE do [Arduino](https://www.arduino.cc/en/software)

3. Abra a IDE e vá para o menu **File** > **Preferences** e insira a URL abaixo no campo **Additional Boards Manager URLs**
   http://digistump.com/package_digistump_index.json
   
4. Assim que finalizar, vá para o menu **Board** > **Boards Manager**. Clique no campo de pesquisa e digite **Digistump AVR Boards**. O pacote irá aparece abaixo e então clique no botão para instalar.

5. Antes de você iniciar qualquer programa é importante ir até o menu **Tools** > **Board**. após isso nevege para baixo até que ver a opção **Digispark (Default — 16.5mhz)** e então a selecione.

6. Para precaução, vá até o menu **Tools** > **Programmer** e altere para a opação **USBtinyISP**

No link abaixo estará o passo-a-passo original em inglês: 

https://digistump.com/wiki/digispark/tutorials/connecting

# Scripts

#### Rick_Astley_Script

Este Script transforma Rick Astley em Risk ASCII e faz ele cantar e dançar Never Let You Down dentro da tela do PowerShell. Neste temos dois scripts, um que fiz baseado na biblioteca padrão, DigiKeyboard, e o outro que usei a biblioteca escrita e mapeada pelo Eduardo Gadotti.

# Miscellaneous

[Overview Teclado Pt-Br ABNT2](http://kbdlayout.info/KBDBR)

# Referencias e Créditos

[Gadotti](https://github.com/Gadotti/DigisparkScripts)

[CedArctic](https://github.com/CedArctic/DigiSpark-Scripts)