## 🚀 Program 12

### 📋 Objective
Program to implement MQTT protocol and publish some data. 

---

Perfect 🚀 You’ve shared a **Publisher–Subscriber** example using **MQTT protocol** with Python and HiveMQ’s public broker. Let me explain everything in detail and also tell you how to run it step by step.

---

# 🔹 What is MQTT?

* **MQTT (Message Queuing Telemetry Transport)** is a **lightweight publish–subscribe messaging protocol** commonly used in **IoT**.
* It involves:

  1. **Broker** – central server that manages communication (here: `broker.hivemq.com`).
  2. **Publisher** – sends messages to a topic.
  3. **Subscriber** – listens for messages from a topic.

---

# 🔹 Explanation of the Code

### **1. Publisher Code**

```python
import paho.mqtt.client as mqtt
from random import randrange
import time

mqtt_broker = "broker.hivemq.com"
client = mqtt.Client(mqtt.CallbackAPIVersion.VERSION1, "number-out")
client.connect(mqtt_broker)

while True:
    num = randrange(1, 11)  # generate random number 1–10
    client.publish("random number", num)  # publish to topic "random number"
    print(f"The number {num} is published as random number")
    time.sleep(1)  # wait for 1 second
```

✅ What it does:

* Connects to **HiveMQ broker**.
* Every **1 second**, generates a random number between 1 and 10.
* Publishes it to the topic `"random number"`.
* Prints confirmation on the console.

---

### **2. Subscriber Code**

```python
import paho.mqtt.client as mqtt

def on_connect(client, userdata, flags, rc):
    print(f"Connected with result code {rc}")
    client.subscribe("random number")  # subscribe to topic

def on_message(client, userdata, msg):
    print(f"Received message: {msg.payload.decode()} on topic: {msg.topic}")

client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message

client.connect("broker.hivemq.com", 1883, 60)
client.loop_forever()
```

✅ What it does:

* Connects to **HiveMQ broker** at port `1883`.
* When connected, subscribes to `"random number"`.
* Whenever a new number is published, `on_message()` prints it.
* Runs forever listening to messages.

---

# 🔹 How to Run This Code

### **Step 1: Install Paho MQTT**

In terminal (Linux/macOS) or CMD/PowerShell (Windows):

```bash
pip install paho-mqtt
```

---

### **Step 2: Save Codes Separately**

1. **publisher.py** → the first block (random number publisher)
2. **subscriber.py** → the second block (listener)

---

### **Step 3: Run Both Scripts**

* Open **two terminals** (or two tabs).

* Run publisher in one:

  ```bash
  python publisher.py
  ```

  Output:

  ```
  The number 5 is published as random number
  The number 8 is published as random number
  ...
  ```

* Run subscriber in another:

  ```bash
  python subscriber.py
  ```

  Output:

  ```
  Connected with result code 0
  Received message: 5 on topic: random number
  Received message: 8 on topic: random number
  ...
  ```

---

# ✅ Summary

* `publisher.py` → sends random numbers every second to **HiveMQ broker**.
* `subscriber.py` → receives and prints those numbers.
* They communicate via the MQTT topic `"random number"`.

---

👉 Do you want me to also show you how to **visualize these messages live in HiveMQ’s online MQTT Web Client** (so you can see without writing subscriber code)?
