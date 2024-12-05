# CPSC 581 - Assignment 3: Physical Prototype  
## **Security Radar System**  

### **Team Information**  
**Team Number:** 6
**Team Members:**  
- Rei Tsunemi  
- Rezwan Ahmed
- Frank Yan

---

### **Project Description**  
The Radar Security System is a physical prototype created for CPSC 581 (Human-Computer Interaction) as part of our exploration into tangible user interfaces. The prototype uses an Arduino to simulate a radar-based security system that detects objects within its range and displays relevant feedback.  

This system demonstrates how physical computing can be integrated into real-world scenarios to enhance interaction and usability, making it a practical solution for securing spaces through object detection.

---

### **Required Software and Tools**  
To replicate or use this project, you'll need the following software:  
- **Arduino IDE**: To upload the code onto the Arduino board ([Download Arduino IDE](https://www.arduino.cc/en/software)).  
- **Processing IDE**: For visualizing radar output ([Download Processing IDE](https://processing.org/download/)).  
- **Libraries for Arduino and Processing**:  
  - `Servo.h` (Arduino library)  
  - Processing Serial library (comes pre-installed with the Processing IDE).  

---

### **Hardware Requirements**  
- Arduino Uno (or a compatible board).  
- Ultrasonic Sensor (e.g., HC-SR04).  
- Servo Motor.  
- Breadboard and jumper wires.  
- USB cable for connecting the Arduino to your computer.  

---

### **Setup Instructions**  

#### 1. **Hardware Setup:**  
1. Connect the **HC-SR04 Ultrasonic Sensor**:  
   - VCC to 5V on the Arduino.  
   - GND to GND on the Arduino.  
   - Trig to Digital Pin 9.  
   - Echo to Digital Pin 10.  
2. Connect the **Servo Motor**:  
   - Signal to Digital Pin 3.  
   - VCC to 5V.  
   - GND to GND.  
3. Ensure the connections are stable and use a breadboard if needed.

#### 2. **Software Setup:**  
1. Download and install **Arduino IDE** and **Processing IDE** from the provided links.  
2. Clone this repository to your local machine:  
   ` bash
   git clone https://github.com/rei-tsunemi/cpsc581-assignment3-physical-prototype.git
   cd cpsc581-assignment3-physical-prototype
  `
	3.	Open the Arduino sketch (radar_system.ino) in the Arduino IDE.
	4.	Install the required Arduino libraries (e.g., Servo.h) if not already installed.

3. Upload Code to Arduino:

	1.	Connect the Arduino board to your computer using the USB cable.
	2.	Select the correct Board (e.g., Arduino Uno) and Port from the Tools menu in Arduino IDE.
	3.	Upload the sketch to the Arduino by clicking the Upload button.
