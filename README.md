# Pechkas.
Vision-guided ESP32 robotic arm for automated screw and unscrew operations using high-torque servo motors.

##  Overview
This project focuses on the design and development of a **vision-guided robotic arm** capable of performing **automated screw and unscrew operations**.  
The system is built around an **ESP32 microcontroller** controlling **high-torque servo motors**, enabling precise positioning and sufficient torque for fastening tasks.

The long-term goal is to integrate **camera-based alignment and closed-loop control**, allowing the robotic arm to autonomously locate and operate on screws.

---

##  Project Objectives
- Design a **low-cost robotic arm** for screw fastening applications  
- Implement **reliable PWM-based servo control** using ESP32  
- Develop a **mechanically stable arm and end-effector** for screwdriver operation  
- Integrate **camera-assisted alignment** for screw detection  
- Enable scalability toward **industrial automation and smart assembly**

---

##  Key Features
- ESP32-based embedded control system  
- High-torque servo motor actuation (MG995 / MG996 class)  
- External power supply with buck converters for safe high-current operation  
- Modular mechanical design with the help of aluminium profiles and 3d printed pla
- Vision-guided alignment strategy (camera-assisted)  

---

##  System Architecture

###  Hardware Components
- ESP32 development board  
- mg-995 Servo motors  
- External SMPS (12V 10A)  
- Buck converters (5–6V for servos)  
- Camera module / USB camera  
- Mechanical arm structure and screwdriver end-effector  

---

###  Software Stack
- Embedded C firmware (ESP32)  
- PWM-based servo motor control  
- Motion sequencing and testing routines  
- Planned computer vision pipeline (OpenCV)

---

##  Mechanical Design
- Used 1.5 inch aluminium angles for links
- used **Fusion 360** to design holders and other parts
- Emphasis on:
  - Structural rigidity  
  - Torque handling during screw tightening  
  - Accurate screwdriver alignment  
- CAD files included for arm links, mounts, and end-effector

---
