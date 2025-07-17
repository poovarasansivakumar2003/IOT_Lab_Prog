## 🚀 Program 9

### 📋 Objective
Arduino program to implement a 16x2 LCD alphanumeric display and display temperature and current date and time.

---

### Prerequisite

- First, install the Stepper Library.
- Go to Sketch > Include Library > Manage Libraries...
- Search for `DHT sensor library` by Adafruit and install it.
`Also, install Adafruit Unified Sensor when prompted.`
- Search for `LiquidCrystal_I2C` by Frank de Brabander and install it.

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
| SDA     | A4          | I2C Data line   |
| SCL     | A5          | I2C Clock line  |

##### 📌 For Arduino Uno, I2C pins are:  
- SDA → A4  
- SCL → A5

---

### Procedure:

- Upload the Arduino code to your board.
- Run the provided Python script [main.py](./main.py) on your computer.
- Ensure the serial port in [main.py](./main.py) matches the port your Arduino is connected to.