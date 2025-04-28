const int sensorTensaoPin = 34; // Pino adequado

void setup() {
  Serial.begin(115200);
}

void loop() {
  int leituraAnalogica = analogRead(sensorTensaoPin);
  float tensao = (leituraAnalogica / 4095.0) * 3.3 * 2; // 3.3V * 2 Divisor de tensao

  Serial.print("Tensao da bateria: ");
  Serial.print(tensao, 2);
  Serial.println(" V");

  delay(500);
}
