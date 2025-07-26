## 🚀 Program 11

### 📋 Objective
Learn the basics of Raspberry Pi, its features, pinout, and configuration.

---

## 🧠 What is Raspberry Pi?

The **Raspberry Pi** is a **credit card-sized single-board computer** developed by the Raspberry Pi Foundation. It is designed to promote basic computer science education in schools and developing countries.

![Raspberry Pi 4 Model B](https://www.elepcb.com/wp-content/uploads/2024/05/Parts-of-Respberry-Pi.png)
*Raspberry Pi 4 Model B - Image credit: Raspberry Pi Foundation*

### Primary Uses
- Education and programming
- IoT (Internet of Things) applications
- Home automation
- Retro gaming
- Media centers
- DIY electronics
- Robotics prototyping
- Web servers and network tools

---

## 📦 Raspberry Pi Models and Features

### Current Models (as of 2023)

| Model        | Processor                        | RAM           | Connectivity                       | Power             | Price Range |
|--------------|----------------------------------|---------------|------------------------------------|-------------------|-------------|
| Pi 5         | 2.4GHz Quad-core ARM Cortex-A76  | 4GB/8GB       | Dual 4K HDMI, Wi-Fi 5, BT 5.0, USB 3.0 | USB-C (5V/5A)     | $60-$80     |
| Pi 4         | 1.5GHz Quad-core ARM Cortex-A72  | 2GB/4GB/8GB   | Dual 4K HDMI, Wi-Fi 5, BT 5.0, USB 3.0 | USB-C (5V/3A)     | $35-$75     |
| Pi Zero 2 W  | 1GHz Quad-core ARM Cortex-A53    | 512MB         | Mini HDMI, Wi-Fi, BT               | Micro USB (5V)    | $15         |
| Pi Pico      | RP2040 Dual-core ARM Cortex M0+  | 264KB         | None (GPIO only)                   | Micro USB         | $4          |

![Raspberry Pi Family](https://www.raspberrypi-spy.co.uk/wp-content/uploads/2015/11/Pi-Family-Photo-Master-1500-1024x1024.jpg)
*The Raspberry Pi family - Image credit: Raspberry Pi Foundation*

### Key Features (Raspberry Pi 4 Model B)

- **Processor**: Broadcom BCM2711 (Quad-core Cortex-A72 @ 1.5GHz)
- **RAM Options**: 2GB, 4GB, 8GB LPDDR4
- **Storage**: microSD card slot
- **Display**: 
  - 2× micro HDMI ports (up to 4K@60Hz)
  - 2-lane MIPI DSI display port
- **Connectivity**:
  - Gigabit Ethernet
  - 2.4 GHz and 5.0 GHz IEEE 802.11ac Wi-Fi
  - Bluetooth 5.0, BLE
- **USB Ports**: 2× USB 3.0, 2× USB 2.0
- **GPIO**: 40-pin header for hardware interfacing
- **Other Interfaces**: 2-lane MIPI CSI camera port, 3.5mm audio/video jack
- **Power**: USB-C (5V, 3A recommended)

---

## 📊 GPIO Pinout (40-Pin Header)

The **GPIO (General Purpose Input/Output)** pins allow you to connect electronic components like LEDs, sensors, and motors.

![Raspberry Pi GPIO Pinout](https://pinout.xyz/resources/raspberry-pi-pinout.png)
*Comprehensive GPIO pinout diagram - Image credit: pinout.xyz*

### Pin Types

- **Power Pins**:
  - 3.3V (Pin 1, Pin 17)
  - 5V (Pin 2, Pin 4)
  - Ground (Pin 6, 9, 14, 20, 25, 30, 34, 39)
- **Standard GPIO Pins**: Configurable as input or output
- **Special Function Pins**:
  - I2C: GPIO 2 (SDA), GPIO 3 (SCL)
  - SPI: GPIO 9 to 11 (MISO, MOSI, SCLK)
  - UART: GPIO 14 (TXD), GPIO 15 (RXD)
  - PWM: GPIO 12, 13, 18, 19

### Important Pins for Beginners

| Pin | Name           | Function         | Common Use                |
|-----|----------------|------------------|---------------------------|
| 1   | 3.3V           | Power supply     | Low voltage sensors       |
| 2   | 5V             | Power supply     | Higher power devices      |
| 6   | GND            | Ground           | Complete electrical circuits |
| 3   | GPIO2 (SDA)    | I2C Data line    | Sensors, displays (I2C)   |
| 5   | GPIO3 (SCL)    | I2C Clock line   | Sensors, displays (I2C)   |
| 8   | GPIO14 (TXD)   | UART transmit    | Serial communication      |
| 10  | GPIO15 (RXD)   | UART receive     | Serial communication      |
| 12  | GPIO18         | PWM channel 0    | Motors, dimming LEDs      |
| 35  | GPIO19         | PWM channel 1    | Motors, dimming LEDs      |

---

## ⚙️ Configuration & Setup

[Raspberry Pi Setup](https://projects.raspberrypi.org/en/projects/raspberry-pi-setting-up)

### Required Hardware

- Raspberry Pi board
- microSD card (16GB+ recommended, Class 10)
- Power supply (official recommended):
  - Pi 4: USB-C, 5V/3A
  - Pi 3/Zero: Micro USB, 5V/2.5A
- Display with HDMI input
- HDMI cable (or micro-HDMI adapter for Pi 4)
- USB keyboard and mouse
- Optional: case, heatsinks, cooling fan

### Operating System Installation

1. **Download the Raspberry Pi Imager**  
   [Raspberry Pi Software](https://www.raspberrypi.com/software/)

   ![Raspberry Pi Imager](https://www.raspberrypi.com/app/uploads/2020/03/RPI_intro-e1583228263677.png)
   *Raspberry Pi Imager - Image credit: Raspberry Pi Foundation*

2. **Install the OS**
   - Insert your microSD card into your computer
   - Launch Raspberry Pi Imager
   - Choose OS (Raspberry Pi OS is recommended for beginners)
   - Choose your SD card
   - Click "WRITE" and wait for completion

3. **First Boot Configuration**
   - Insert the microSD card into the Pi
   - Connect peripherals (display, keyboard, mouse)
   - Connect power to boot up
   - Follow the setup wizard to:
     - Set country, language, and timezone
     - Create a user account and password
     - Configure Wi-Fi
     - Update software

   ![Raspberry Pi Setup Wizard](https://www.raspberrypi.com/documentation/computers/images/initial-setup/restart.png?hash=a4722ccce3851961d3c05d4ac8245452)
   *Raspberry Pi Setup Wizard - Image credit: Raspberry Pi Documentation*

### Advanced Configuration

Access Raspberry Pi Configuration tool:

1. **GUI Method**  
   Raspberry Pi menu → Preferences → Raspberry Pi Configuration

2. **Terminal Method**
   ```bash
   sudo raspi-config
   ```

   ![Raspi-Config Tool](https://www.raspberrypi.com/documentation/computers/images/raspi-config.png)
   *Raspi-Config Interface - Image credit: Raspberry Pi Documentation*

Key configuration options:
- System options (hostname, password, auto-login)
- Interface options (enable/disable I2C, SPI, SSH, VNC)
- Performance options (overclock, GPU memory)
- Localization options (locale, timezone, keyboard)

---

## 🖥 Essential Commands for Raspberry Pi

```bash
# System information
cat /proc/cpuinfo         # CPU information
vcgencmd measure_temp     # CPU temperature
free -h                   # Memory usage
df -h                     # Disk usage

# System management
sudo apt update           # Update package lists
sudo apt full-upgrade     # Upgrade installed packages
sudo reboot               # Reboot the Pi
sudo shutdown -h now      # Safe shutdown

# GPIO control (with RPi.GPIO library in Python)
python3                   # Start Python 3 interpreter

# Network
ifconfig                  # Show network interfaces
iwconfig                  # Show wireless interfaces
ping google.com           # Test connectivity
```

---

## 📡 GPIO Interfaces & Programming

### Available Interfaces

| Interface | Description             | Common Uses                | Enable Command                                  |
|-----------|-------------------------|----------------------------|-------------------------------------------------|
| GPIO      | Digital input/output    | LEDs, buttons, relays      | Enabled by default                              |
| PWM       | Pulse Width Modulation  | Motor control, LED dimming | Hardware PWM on pins 12, 13, 18, 19             |
| I2C       | Inter-Integrated Circuit| OLED displays, sensors     | `sudo raspi-config` → Interface Options → I2C   |
| SPI       | Serial Peripheral Interface | Displays, ADCs, sensors | `sudo raspi-config` → Interface Options → SPI   |
| UART      | Serial communication    | GPS modules, microcontrollers | `sudo raspi-config` → Interface Options → Serial Port |

### Programming the GPIO

**Python Example (Blinking LED):**
```python
import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
LED_PIN = 18
GPIO.setup(LED_PIN, GPIO.OUT)

try:
    while True:
        GPIO.output(LED_PIN, GPIO.HIGH)  # Turn LED on
        time.sleep(1)
        GPIO.output(LED_PIN, GPIO.LOW)   # Turn LED off
        time.sleep(1)
except KeyboardInterrupt:
    GPIO.cleanup()  # Clean up on exit
```

![LED Circuit with Raspberry Pi](https://projects-static.raspberrypi.org/projects/leds-buzzers-scratch-games/77c618ed9d4a6ed14ba59ec76dfb3cc979c5ff62/en/images/lightLED_ledResistorAndWires.png)
*LED Circuit with Raspberry Pi - Image credit: Raspberry Pi Foundation*

---

## 📚 Learning Resources

- **Official Documentation**
  - [Raspberry Pi Documentation](https://www.raspberrypi.com/documentation/)
  - [GPIO Documentation](https://www.raspberrypi.com/documentation/computers/os.html#gpio-and-the-40-pin-header)
- **Online Learning**
  - [Raspberry Pi Projects](https://projects.raspberrypi.org/)
  - [Adafruit Learning System](https://learn.adafruit.com/category/raspberry-pi)
  - [ElectroPeak Tutorials](https://electropeak.com/learn/category/raspberry-pi/)
- **Community Support**
  - [Raspberry Pi Forums](https://forums.raspberrypi.com/)
  - [Reddit r/raspberry_pi](https://www.reddit.com/r/raspberry_pi/)
- **Books**
  - "Raspberry Pi Cookbook" by Simon Monk
  - "Programming the Raspberry Pi" by Simon Monk
  - "Raspberry Pi User Guide" by Eben Upton

---

## 🚀 Starter Project Ideas

| Project                | Components Needed           | Difficulty   |
|------------------------|----------------------------|--------------|
| LED Blinker            | LED, resistor              | Beginner     |
| Weather Station        | DHT22 sensor, breadboard   | Beginner     |
| Motion Detection Camera| Pi Camera, PIR sensor      | Intermediate |
| Smart Mirror           | Monitor, frame, Pi Camera  | Intermediate |
| Home Automation        | Relays, sensors, breadboard| Advanced     |
| Retro Gaming Console   | Game controller, SD card with RetroPie | Beginner |

---

*All images used under fair use for educational purposes with attribution to the original sources.*
