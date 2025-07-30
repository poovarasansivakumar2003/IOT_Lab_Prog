## 🚀 Program 9

### 📋 Objective
Arduino program to implement a 16x2 LCD alphanumeric display and display temperature and current date and time.

---

### 🛠️ Prerequisites

Before you begin, make sure you have the following libraries installed in your Arduino IDE:

#### 1. DHT Sensor Library (by Adafruit)
- Open the Arduino IDE.
- Navigate to **Sketch > Include Library > Manage Libraries...**
- Search for **"DHT sensor library"** by Adafruit and click **Install**.
- When prompted, also install the **Adafruit Unified Sensor** library.

#### 2. LiquidCrystal I2C Library
- Download the ZIP file: [LiquidCrystal Library](./Arduino-LiquidCrystal-I2C-library-master.zip)
- In the Arduino IDE, go to **Sketch > Include Library > Add .ZIP Library...**
- Select the downloaded ZIP file to install.

After installation, both libraries should appear under **Sketch > Include Library**.

Additionally, install the Python `pyserial` package by running `pip install pyserial` in your terminal or command prompt to enable system time communication.

Double-check that the correct port is selected in the Arduino IDE under **Tools > Port**.

If you encounter a `PermissionError` or `SerialException`, ensure that no other program (such as the Arduino Serial Monitor) is using the port.

---

### 🔌 Connection Details

#### 🔹 1. DHT11 Sensor to Arduino

| DHT11 Pin | Connects To        |
|-----------|--------------------|
| VCC       | 5V on Arduino      |
| DATA      | Pin 2 on Arduino   |
| GND       | GND on Arduino     |

⚠️ Some DHT11 modules have only 3 pins (VCC, DATA, GND). Others may have 4 pins — ensure you are using the correct data pin.

#### 🔹 2. I2C LCD (16x2) to Arduino

| LCD Pin | Connects To | Function        |
|---------|-------------|-----------------|
| VCC     | 5V          | Power           |
| GND     | GND         | Ground          |
| SDA     | SDA         | I2C Data line   |
| SCL     | SCL         | I2C Clock line  |

---

### Procedure:

- Upload the Arduino code to your board.
- Run the provided Python script [main.py](./main.py) on your computer.
- Ensure the serial port in [main.py](./main.py) matches the port your Arduino is connected to.