# objetos_inteligentes_conectados
Disciplina Objetos Inteligentes Conectados - ADS Mackenzie

**Projeto: Monitor de Umidade com Arduino e Sensor AHT10**

**Descrição:**
Este projeto consiste em criar um sistema de monitoramento de umidade usando um sensor AHT10 e um Arduino. O sensor AHT10 mede a temperatura e a umidade e fornece os dados ao Arduino, que os exibe no monitor serial.

**Materiais Necessários:**
- Arduino Uno (ou similar)
- Sensor de Umidade AHT10
- Protoboard
- Cabos jumper macho-fêmea
- Computador com Arduino IDE instalado
- Fonte de alimentação para o Arduino (por exemplo, cabo USB)

**Instruções de Montagem:**
1. Conecte o pino VCC do AHT10 à linha de alimentação positiva (+) no protoboard usando um cabo jumper macho-fêmea.
2. Conecte o pino GND do AHT10 à linha de terra (-) no protoboard usando um cabo jumper macho-fêmea.
3. Conecte o pino SDA do AHT10 a uma linha de dados no protoboard usando um cabo jumper macho-fêmea.
4. Conecte a linha de alimentação positiva do protoboard ao pino 5V no Arduino usando um cabo jumper macho-fêmea.
5. Conecte a linha de terra do protoboard ao pino GND no Arduino usando um cabo jumper macho-fêmea.
6. Conecte a linha de dados do protoboard ao pino A4 (ou outro pino SDA disponível) no Arduino usando um cabo jumper macho-fêmea.

**Programação:**
- Abra a Arduino IDE.
- Instale a biblioteca AHT10, se necessário.
- Carregue o código fornecido para ler os dados do sensor AHT10 e exibi-los no monitor serial.

**Teste e Monitoramento:**
- Conecte o Arduino ao computador.
- Abra o monitor serial na Arduino IDE para visualizar os dados de umidade lidos pelo sensor AHT10.

**Considerações:**
- Organize os fios no protoboard de forma ordenada e evite curtos-circuitos.
- Adapte o código conforme necessário para atender a requisitos específicos ou integrar o projeto a outras funcionalidades.

Este README fornece uma visão geral do projeto, os materiais necessários, instruções de montagem, programação e testes. Certifique-se de consultar a seção "Considerações" para dicas adicionais.
