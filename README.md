# OrbitWatch - Monitoramento Inteligente de Riscos Ambientais

## Descrição do Projeto

O OrbitWatch é uma solução desenvolvida para auxiliar no monitoramento de riscos ambientais, com foco na identificação de condições favoráveis à ocorrência de queimadas. A proposta utiliza sensores conectados a um Arduino para coletar dados e emitir alertas visuais e sonoros quando são detectadas temperaturas elevadas.

Este projeto foi desenvolvido como parte da disciplina **Edge Computing & Computer Systems**.

---

## Objetivo da Solução

Criar um sistema simples e eficiente capaz de monitorar a temperatura de uma determinada área e alertar usuários sobre possíveis situações de risco ambiental, contribuindo para a prevenção de queimadas e outros eventos relacionados ao aumento excessivo da temperatura.

---

## Componentes Utilizados

* Arduino Uno
* Sensor de temperatura TMP36
* LED Verde
* LED Amarelo
* LED Vermelho
* Buzzer
* Resistores de 220Ω
* Simulador Wokwi

---

## Funcionamento

O sensor TMP36 realiza a leitura da temperatura do ambiente.

De acordo com a temperatura identificada, o sistema responde da seguinte forma:

### Situação Segura

* Temperatura abaixo de 30°C
* LED Verde aceso
* Buzzer desligado

### Situação de Atenção

* Temperatura entre 30°C e 40°C
* LED Amarelo aceso
* Buzzer desligado

### Situação de Risco

* Temperatura acima de 40°C
* LED Vermelho aceso
* Buzzer ativado

Além disso, os valores da temperatura são exibidos no Monitor Serial para acompanhamento em tempo real.

---

## Estrutura do Circuito

### Sensor TMP36

| TMP36 | Arduino |
| ----- | ------- |
| VCC   | 5V      |
| OUT   | A0      |
| GND   | GND     |

### LEDs

| Componente   | Pino Arduino |
| ------------ | ------------ |
| LED Verde    | 2            |
| LED Amarelo  | 3            |
| LED Vermelho | 4            |

### Buzzer

| Componente | Pino Arduino |
| ---------- | ------------ |
| Buzzer     | 5            |

Todos os LEDs utilizam resistores de 220Ω conectados ao GND.

---

## Instruções de Execução

1. Abrir o projeto no simulador Wokwi.
2. Iniciar a simulação.
3. Ajustar a temperatura do sensor TMP36.
4. Observar o comportamento dos LEDs e do buzzer.
5. Acompanhar os valores de temperatura através do Monitor Serial.

---

## Link da Simulação

https://wokwi.com/projects/465993452851885057

---

## Arquivos do Projeto

* `sketch.ino` → Código fonte Arduino/C++
* `README.md` → Documentação do projeto

---

## Integrante

Bruno Marcelo Real e Silva - RM:569785
---

## Licença

Projeto desenvolvido exclusivamente para fins acadêmicos.
