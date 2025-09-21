# Components Used

This Smart Home Automation system integrates a range of sensors, actuators, and supporting hardware to monitor and control the home environment.

---

## 🖥️ Controller
- **ESP32 / ESP8266 (NodeMCU)**
  - Acts as the main microcontroller.
  - Handles sensor data processing and communication with the Blynk IoT platform.

---

## 🌡️ Sensors
- **DHT11 / DHT22 (Temperature & Humidity)**
  - Measures temperature and humidity.
  - Digital output, DHT22 offers higher accuracy and wider range than DHT11.
  - Used for monitoring indoor environmental conditions.

- **MQ-3 Gas Sensor**
  - Detects gases such as alcohol and smoke.
  - Provides analog output proportional to gas concentration.
  - Used for detecting gas leaks or harmful fumes.

- **Ultrasonic Sensor (HC-SR04)**
  - Measures distance using ultrasonic waves.
  - Trigger/Echo pin system with centimeter-level accuracy.
  - Used for object detection and water-level monitoring.

- **PIR Sensor (Passive Infrared)**
  - Detects motion through infrared radiation changes.
  - Provides digital or analog output.
  - Used for home security and intrusion detection.

- **Flame Sensor**
  - Detects presence of flame or fire.
  - Provides digital/analog output indicating flame presence.
  - Used for fire detection and safety alarms.

---

## ⚙️ Actuators
- **Relay Module (2-Channel)**
  - Electronic switch for controlling high-voltage devices.
  - Used to automate lights, fans, and other appliances.

- **Buzzer**
  - Provides audible alerts or alarms.
  - Activated by digital signals from the controller.

---

## 🔋 Power Supply
- **Power Adapters & Batteries**
  - Provide stable power for microcontrollers and sensors.
  - Must meet voltage/current requirements of components.

---

## 🖼️ Miscellaneous
- **LCD Display (I2C Interface)**
  - Displays system data (temperature, humidity, alerts).
  - I2C reduces pin usage for simpler wiring.

- **Breadboard & Jumper Wires**
  - Used for prototyping and connections.
  - Supports quick testing and iteration.

---
