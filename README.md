# Four-Wheeled Bluetooth Controlled Car

This repository contains the code, circuit diagrams, and images for a four-wheeled car project. The basic code used in this project is open-source and compatible with a mobile application (link to the application provided below). I have modified the basic code to create two versions of the project, each with its own unique features and improvements.

## Versions of the Project

### **Version 1: 4-Wheel Drive with Differential Steering and Timeout Handling**
This version of the project uses a 4-wheel drive mechanism and differential steering. The movement of the car is controlled by adjusting the speed of the left and right wheel pairs. I have added a timeout handling system that addresses the issue of the car overshooting when the HC05 Bluetooth module stops receiving signals. This system ensures that the car remains in a stable state even in the absence of new input.

#### **Key Features:**
- **4-Wheel Drive Mechanism:** All four wheels are powered for enhanced traction and stability.
- **Differential Steering:** Movement controlled by speed adjustments of the left and right wheel pairs.
- **Timeout Handling:** Prevents overshooting by halting the car if signals are not received for a specified period.

### **Version 2: 2-Wheel Drive with Mechanical Steering and Timeout Setting**
In this version, I've incorporated a 2-wheel drive mechanism and mechanical steering using a servo motor, replacing the differential steering mechanism. The timeout handling system from Version 1 is also included. This version allows users to convert the car into a 4-wheel drive by adding additional motors and wiring, if desired. The servo motor allows for more precise control over the car's direction.

#### **Key Features:**
- **2-Wheel Drive Mechanism:** The car is powered by two wheels by default, but users can convert it to 4WD.
- **Mechanical Steering:** Servo motor-based steering mechanism for precise control.
- **Timeout Handling:** Stops the car if the HC05 stops receiving signals for a specific duration.
- **Timeout Setting:** Allows configuration of the timeout period according to the user’s requirements.
- **Optional 4WD Conversion:** Users can modify the setup to add motors for 4-wheel drive.

## **Project Setup**

### **Hardware Requirements:**
- Version 1: 4 DC motors (4-wheel drive mechanism)
- Version 2: 2 DC motors (2-wheel drive mechanism, with optional conversion to 4WD)
- HC05 Bluetooth module
- Arduino (or similar microcontroller)
- Servo motor (for Version 2)
- Motor driver (L298N or similar)
- Power supply (battery)
- Jumper wires and other basic electronic components

### **Software Requirements:**
- Arduino IDE
- Bluetooth application for controlling the car (Link to the app: [Bluetooth RC Car](https://bluetooth-rc-car.en.softonic.com/android) )

### **Circuit Diagram:**
The circuit diagrams for both versions of the project are included in this repository. Please refer to the diagrams for wiring and connections.

## **Support**

If you need help or have any questions, feel free to reach out. I’m happy to assist you in setting up or troubleshooting any issues you may encounter.

## **Acknowledgments**

- **App:** This project utilizes the [Bluetooth RC Car](https://bluetooth-rc-car.en.softonic.com/android) app for Bluetooth communication. The developer of the app is not explicitly mentioned in the app's documentation, so the attribution is based on the app’s listing available on Softonic. If further details about the developer or the app’s license become available, proper credit will be updated.

- **Basic Code:** The code used in this project is based on an open-source solution. The original author and license information of the basic code are not known at the moment. Once identified, proper attribution will be provided in this repository.

## **License**

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## **Contributing**

Feel free to fork this repository, make improvements, and submit pull requests. Contributions are always welcome!
