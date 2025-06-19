## 🚀 Program 12

### 📋 Objective
Program to implement MQTT protocol and publish some data. 

---
To implement the **MQTT protocol** and **publish data** using an Arduino-compatible device, you'll typically use a **Wi-Fi-enabled microcontroller**, such as:

* **ESP8266** (e.g., NodeMCU)
* **ESP32**

These boards support **Wi-Fi**, making them ideal for **MQTT** communication with a broker like **Mosquitto**, **HiveMQ**, or **Adafruit IO**.

---

## ✅ Requirements

### 🔧 Hardware

* **ESP8266** (NodeMCU) or **ESP32**
* USB cable and Arduino IDE

### 📦 Libraries (Install via Library Manager)

1. `PubSubClient` – MQTT client library
2. `ESP8266WiFi` or `WiFi` (for ESP32)

---

## ✅ Arduino Code Example – Publish Data Using MQTT

This example publishes temperature (simulated) every 5 seconds to an MQTT topic.

---

### 📝 Code (for ESP8266/NodeMCU)

```
#include <ESP8266WiFi.h>
#include <PubSubClient.h>

// WiFi credentials
const char* ssid = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";

// MQTT broker settings
const char* mqtt_server = "broker.hivemq.com"; // public broker
const int mqtt_port = 1883;
const char* mqtt_topic = "test/temperature";

WiFiClient espClient;
PubSubClient client(espClient);

void setup_wifi() {
  delay(10);
  Serial.println("Connecting to WiFi...");
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi connected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());
}

void reconnect() {
  // Loop until reconnected
  while (!client.connected()) {
    Serial.print("Attempting MQTT connection...");
    if (client.connect("ESP8266Client")) {
      Serial.println("connected");
    } else {
      Serial.print("failed, rc=");
      Serial.print(client.state());
      Serial.println(" try again in 5 sec");
      delay(5000);
    }
  }
}

void setup() {
  Serial.begin(115200);
  setup_wifi();
  client.setServer(mqtt_server, mqtt_port);
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  // Simulate temperature reading
  float temp = random(20, 30) + random(0, 100) / 100.0;

  char message[50];
  snprintf(message, 50, "Temperature: %.2f °C", temp);

  Serial.print("Publishing: ");
  Serial.println(message);
  client.publish(mqtt_topic, message);

  delay(5000); // publish every 5 seconds
}
```

---

## 📌 Notes

* **MQTT Broker**: You can use free brokers like:

  * `broker.hivemq.com`
  * `test.mosquitto.org`
  * Your own Mosquitto server (on PC/Raspberry Pi)
* **Client ID** must be unique per client connection.
* Use **MQTT.fx** or **mosquitto\_sub** to view messages.

---




### 🔧 Circuit Diagram

![]()

---

### 🌐 Interactive Simulation

**Tinkercad Link:** []()

---