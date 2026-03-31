# Air Bubble Detection and Removal System

## Project Overview
This project presents an **Air Bubble Detection and Removal System** designed for IV fluid monitoring using an ESP32 microcontroller.  

The system integrates **ultrasonic, IR, and capacitive sensors** to detect air bubbles in real-time and automatically activates a **solenoid valve** (simulated using LED) to remove them.

---

## Wokwi Simulation
https://wokwi.com/projects/459290466418469889

Developed and tested using **Wokwi Online Simulator**.

---

## Objectives
- Detect air bubbles in IV fluid lines
- Prevent risk to patients caused by air embolism
- Automatically remove detected bubbles
- Ensure continuous and safe fluid flow

---

## Components Used
- ESP32 Microcontroller
- Ultrasonic Sensor (HC-SR04)
- IR Sensor
- Capacitive Sensor (simulated using potentiometer)
- Solenoid Valve (simulated using LED)
- Resistors
- Connecting wires

---

## Working Principle

### Step 1: Fluid Flow Monitoring
IV fluid flows through the tube where sensors continuously monitor for bubbles.

### Step 2: Multi-Sensor Detection
- Ultrasonic sensor → detects micro bubbles  
- IR sensor → detects large bubbles  
- Capacitive sensor → detects bubbles in opaque fluids  

### Step 3: Data Processing
All sensor data is processed by ESP32.

### Step 4: Bubble Detection Logic
- If no bubble → normal flow continues  
- If bubble detected → system triggers removal  

### Step 5: Bubble Removal
- ESP32 activates solenoid valve  
- Fluid is diverted temporarily  
- Air bubble is removed  
- Normal flow resumes  

---

## Pin Configuration

| Component        | ESP32 Pin |
|----------------|----------|
| Ultrasonic TRIG | GPIO 5  |
| Ultrasonic ECHO | GPIO 18 |
| IR Sensor       | GPIO 19 |
| Capacitive      | GPIO 34 |
| Solenoid (LED)  | GPIO 23 |

---

## Features
- Multi-sensor detection system
- Automatic bubble removal
- Real-time monitoring
- Safe and reliable operation
- Low-cost and scalable design

---

## Simulation Details
The project is simulated using **ESP32 in Wokwi**, which supports multiple sensors and embedded applications. :contentReference[oaicite:1]{index=1}  

---

**Demo video link**
https://drive.google.com/file/d/1SSC7D0pCdrNZdP2cGHNC0lCQioS223i9/view?usp=drivesdk

---

## Future Enhancements
- IoT-based mobile alerts using WiFi
- LCD display for real-time status
- Buzzer alarm system
- Data logging for hospital monitoring

---

##  Author
**Prarthana D.**  
Computer Science Engineering Student  

---

##  License
This project is for educational and research purposes.
