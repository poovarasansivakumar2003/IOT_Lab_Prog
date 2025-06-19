## 🚀 Program 9

### 📋 Objective
Arduino program to implement a 16x2 LCD alphanumeric display and display temperature and current date and time.

---

#### This example assumes:

- You're using a DS18B20 temperature sensor (1-Wire).
- You're using a DS3231 or DS1307 Real-Time Clock (RTC) module.
- The LCD is a 16x2 display using the I2C interface (with backpack).

#### ✅ Required Libraries (Install via Library Manager in Arduino IDE):

- LiquidCrystal_I2C (by Frank de Brabander or compatible)
- OneWire
- DallasTemperature
- RTClib (by Adafruit)

#### 📦 Wiring Overview

- LCD (I2C): Connect SDA to A4, SCL to A5 (for Arduino Uno).
- DS18B20 Sensor: Connect data to pin 2, with a 4.7k pull-up resistor between data and VCC.
- RTC (DS3231/DS1307): Connect SDA to A4, SCL to A5.

#### 🛠 Notes:

- You may need to change the LCD I2C address (from 0x27 to 0x3F) depending on your module.
- Ensure DS18B20 has a pull-up resistor (4.7kΩ) on the data line.
- Adjust the time manually with rtc.adjust(DateTime(year, month, day, hour, minute, second)); if needed.

### 🔧 Circuit Diagram

![]()

---

### 🌐 Interactive Simulation

**Tinkercad Link:** []()

---