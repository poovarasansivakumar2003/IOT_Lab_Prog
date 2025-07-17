## 🚀 Program 10

### 📋 Objective
Arduino program to implement a GSM module and send SMS using some carrier to a cellphone number.

---

#### ✅ What You Need

- GSM Module: SIM800L or SIM900
- Arduino Board: Uno/Nano/MEGA
- SIM Card (with balance or SMS capability, and no PIN lock)
- External Power Supply (recommended for GSM modules, 3.7–4.2V 2A)

#### ⚠️ Wiring (for SIM800L / SIM900 with Arduino Uno)

| GSM Module Pin | Arduino Pin                     |
| -------------- | ------------------------------- |
| VCC            | 3.7–4.2V (external, **not 5V**) |
| GND            | GND                             |
| TX             | D10 (software RX)               |
| RX             | D11 (software TX)               |

Important: Use a voltage divider on Arduino TX → GSM RX to avoid overvolting (Arduino TX is 5V; GSM RX is 2.8V–3.3V tolerant).

#### 🧪 Debug Tips:

- Use a separate power supply for GSM (don't power it from Arduino).
- Use AT commands via Serial Monitor to test the module manually.
- Some SIM cards require you to disable PIN lock via a regular phone.
