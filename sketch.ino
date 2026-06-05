// OrbitWatch - Monitoramento de Risco de Queimadas

const int sensorTemp = A0;

const int ledVerde = 2;
const int ledAmarelo = 3;
const int ledVermelho = 4;

const int buzzer = 5;

void setup() {
  Serial.begin(9600);

  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  pinMode(buzzer, OUTPUT);
}

void loop() {

  int leitura = analogRead(sensorTemp);

  float tensao = leitura * (5.0 / 1023.0);

  float temperatura = (tensao - 0.5) * 100.0;

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" °C");

  if (temperatura < 30) {

    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);

    noTone(buzzer);

  }
  else if (temperatura >= 30 && temperatura < 40) {

    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);

    noTone(buzzer);

  }
  else {

    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);

    tone(buzzer, 1000);

  }

  delay(1000);
}