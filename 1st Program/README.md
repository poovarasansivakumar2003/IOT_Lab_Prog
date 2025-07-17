### 🚀 Program 1

Learn the basics of Arduino MCU boards, features and pinouts of Arduino UNO, differentiate between READ and WRITE pins, install and configure the Arduino IDE and basics of soldering.

---

### 🔧 Learn the Basics of Arduino MCU Boards

#### 1. 🧠 Basics of Arduino MCU Boards

**Arduino** is an open-source electronics platform designed for creating interactive electronic projects. It's suitable for **beginners**, **hobbyists**, and **engineers** alike.

#### 🔹 What is an MCU?

**MCU (Microcontroller Unit)** is the brain of the Arduino board. It controls input/output operations, reads sensors, and performs programmed instructions.

**Common MCUs on Arduino boards:**

* **ATmega328P** (Arduino UNO)
* **ATmega2560** (Arduino Mega)
* **SAMD21** (Arduino Zero)

#### 🔹 Key Features of Arduino Boards:

* Digital and Analog I/O pins
* USB interface for programming
* Power supply regulation (USB or external)
* PWM (Pulse Width Modulation) support
* Serial communication: UART, I2C, SPI

---

### 2. ⚙️ Features and Pinouts of Arduino UNO

![Arduino UNO](https://docs.arduino.cc/static/ef27ed2b2ee70989d2a7fc8446880934/e85cb/arduino_board.png)

The **Arduino UNO** is one of the most widely used boards in the Arduino family.

#### 🔹 Key Specifications:

| Feature               | Description         |
| --------------------- | ------------------- |
| **Microcontroller**   | ATmega328P          |
| **Operating Voltage** | 5V                  |
| **Input Voltage**     | 7–12V (recommended) |
| **Digital I/O Pins**  | 14 (6 provide PWM)  |
| **Analog Input Pins** | 6                   |
| **Flash Memory**      | 32 KB               |
| **SRAM**              | 2 KB                |
| **EEPROM**            | 1 KB                |
| **Clock Speed**       | 16 MHz              |

#### 🔹 Pinouts Overview:

* **Digital Pins (0–13):** General-purpose input/output.
* **PWM Pins:** 3, 5, 6, 9, 10, 11 (used with `analogWrite()`).
* **Analog Pins (A0–A5):** Used with `analogRead()` for sensor input.
* **Communication Pins:**

  * **Serial (UART):** Pin 0 (RX), Pin 1 (TX)
  * **I2C:** A4 (SDA), A5 (SCL)
  * **SPI:** 10 (SS), 11 (MOSI), 12 (MISO), 13 (SCK)
* **Power Pins:**

  * 5V, 3.3V, GND, VIN
* **AREF Pin:** Used for analog reference voltage
* **RESET Pin:** Resets the board

---

#### 3. 🔄 Difference Between READ and WRITE Pins

In Arduino, **pins** can act as either **inputs** (READ) or **outputs** (WRITE).

#### 🟢 READ Pins (Input):

Used to receive signals or data **from external components** like sensors, buttons, etc.

* Use `pinMode(pin, INPUT);`
* Use `digitalRead(pin);` for digital sensors
* Use `analogRead(pin);` for analog sensors

✅ **Example:**
Reading the state of a button:

```cpp
int buttonState = digitalRead(2);
```

---

#### 🔴 WRITE Pins (Output):

Used to send signals **to external components** like LEDs, buzzers, motors, etc.

* Use `pinMode(pin, OUTPUT);`
* Use `digitalWrite(pin, HIGH/LOW);` for ON/OFF control
* Use `analogWrite(pin, value);` for PWM output

✅ **Example:**
Turning ON an LED:

```
digitalWrite(13, HIGH);
```

---

#### 4. 🛠️ Install and Configure Arduino IDE

To write and upload code to an Arduino board, you’ll need the **Arduino IDE**.

#### 🔹 Steps to Install:

1. Visit: [https://www.arduino.cc/en/software](https://www.arduino.cc/en/software)
2. Download the installer for your OS (Windows/macOS/Linux)
3. Follow on-screen installation instructions

#### 🔹 Connect and Configure Arduino UNO:

1. Plug the Arduino UNO into your PC via USB.
2. Open Arduino IDE.
3. Go to **Tools > Board > Arduino UNO**.
4. Go to **Tools > Port** and select the COM port labeled "Arduino UNO".

#### 🔹 Test the Setup with Blink Example:

1. In IDE: Go to **File > Examples > 01.Basics > Blink**
2. Click **Upload** (right arrow icon)
3. The built-in LED on pin 13 should start blinking.

---

#### 5. 🔩 Basics of Soldering

Soldering is the process of joining two or more electronic components using melted solder.

#### 🔹 Basic Tools Needed:

* Soldering iron (30–60W)
* Solder wire (lead-free preferred)
* Soldering stand & cleaning sponge
* Tweezers, desoldering pump or braid

#### 🔹 Soldering Steps:

1. Heat the soldering iron (\~350°C).
2. Clean the tip with a wet sponge.
3. Place the iron tip on both the **pad** and **component lead**.
4. Feed solder into the joint (not directly on the iron).
5. Remove the iron and allow the joint to cool naturally.

#### ⚠️ Safety Tips:

* Work in a well-ventilated area.
* Do **not** touch the hot iron.
* Wear safety goggles.
* Wash hands after soldering (especially when using leaded solder).