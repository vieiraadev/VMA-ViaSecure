#include <WiFi.h>
#include <HTTPClient.h>

// Configurações da rede Wi-Fi
const char* ssid = "#";       // Retirado para inserir no GitHub
const char* password = "#";  // Retirado para inserir no GitHub

// URL do servidor para envio dos dados
const char* serverName = "https://webhook.site/ca853ec6-220e-4786-a5dc-278e563af07f"; // Usado para o teste rapido para receber POST

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, password);
  Serial.print("Conectando-se ao Wi-Fi...");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("Wi-Fi conectado!");
  Serial.print("IP: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;

    // Prepara a requisição
    http.begin(serverName);
    http.addHeader("Content-Type", "application/json");

    String jsonData = "{\"sensor\":\"teste\",\"valor\":123}";

    // Envia o POST
    int httpResponseCode = http.POST(jsonData);

    if (httpResponseCode > 0) {
      String response = http.getString(); // Recebe resposta do servidor
      Serial.println("Resposta do servidor:");
      Serial.println(response);
    } else {
      Serial.print("Erro no envio. Código HTTP: ");
      Serial.println(httpResponseCode);
    }

    http.end();
  } else {
    Serial.println("Wi-Fi desconectado. Tentando reconectar...");
    WiFi.begin(ssid, password);
  }

  delay(5000);
}
