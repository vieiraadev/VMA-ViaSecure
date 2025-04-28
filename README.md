# 📡 ViaSecure – Monitoramento Inteligente de Vias Públicas

O **ViaSecure** é um sistema ciberfísico desenvolvido com **ESP32**, projetado para monitorar e classificar a qualidade das vias públicas em tempo real. Combinando sensores de movimento, localização e tensão, o projeto oferece uma solução robusta para o apoio à manutenção urbana.

---

## 📋 Descrição do Projeto

O sistema coleta dados de acelerômetro, GPS e sensor de tensão para:

- Identificar irregularidades no asfalto.
- Detectar freagens bruscas.
- Verificar o nível de bateria do veículo.
- Registrar possíveis acidentes.

Os dados são enviados para um servidor na nuvem via Wi-Fi. Caso não haja conexão, o dispositivo armazena as informações localmente para posterior envio.

### Principais Funcionalidades:

- **Detecção de Irregularidades** nas vias.
- **Monitoramento de Eventos Críticos** de direção.
- **Controle do Estado da Bateria** do veículo.
- **Armazenamento Local** em caso de desconexão Wi-Fi.
- **Transmissão Segura** via HTTP/HTTPS.

---

## 🚀 Funcionalidades

- **Coleta de Dados em Tempo Real** com sensores de vibração e GPS.
- **Envio de Informações** para um servidor via HTTP/HTTPS.
- **Armazenamento Offline** inteligente.
- **Comunicação entre dispositivos** via UART e I2C.
- **Integração Completa de Hardware e Software**.

---

## 🛠️ Tecnologias Utilizadas

**Hardware:**
- ESP32 (Microcontrolador Wi-Fi)
- MPU6050 (Acelerômetro e Giroscópio)
- NEO-6M (Módulo GPS)
- Sensor de Tensão (0-25V DC)

**Bibliotecas (Software):**
- `WiFi.h` – Comunicação Wi-Fi
- `HTTPClient.h` – Comunicação HTTP
- `Wire.h` e `MPU6050.h` – Leitura do acelerômetro
- `TinyGPS++` – Processamento de dados GPS

**Protocolos:**
- HTTP/HTTPS (Servidor)
- UART/I2C (Comunicação de sensores)
