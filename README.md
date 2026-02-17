# Smart Home and Garden 🌿
This project was developed and presented during the **Emerson STEM DAY** event. 🚀
## Description 📖
The **Smart Home and Garden** is a dual-purpose platform designed to promote sustainability. 
First, it features an **Automated Irrigation System** that utilizes soil moisture sensors to ensure plants are watered only when necessary, preventing water waste. Second, it hosts a **Wireless Control Hub** via an ESP32, which serves an interactive web interface. Through this hub, users can manage hardware indicators and participate in a **Sustainability Quiz** designed to educate users on recycling and circular economy principles.
## Features ✨
### 1. Precision Irrigation 💧
* **Threshold-Based Control:** The system monitors soil moisture and triggers the pump only when the level drops below **45%**.
* **Self-Healing Display:** Includes an automatic reset routine for the I2C LCD every 10 seconds to ensure data integrity and clear readings.
* **Real-time Monitoring:** Local visual feedback via a 16x2 LCD and remote monitoring through the Serial interface.
### 2. Interactive Web Hub 🌐
* **WiFi Access Point:** The system creates its own network (**SSID: LED_Controller**), allowing for off-grid control.
* **Web Dashboard:** A dark-mode, mobile-responsive HTML/CSS interface to toggle system status LEDs (Red, Green, Blue).
* **Educational Module:** A built-in JavaScript-powered quiz that tests and teaches users about:
    * Sustainable development goals.
    * Material degradation and recycling limitations.
    * Energy conservation and biodiversity.
## System Architecture ⚙️
The project utilizes a multi-controller approach to handle both real-time automation and web services:
* **Logic Layer:** Manages sensor data mapping and relay actuation.
* **Web Layer:** An ESP32 WebServer handling HTTP requests and serving the interactive UI.
* **Feedback Layer:** I2C communication for local display and WiFi for remote interaction.
## Project Preview 📷
This is the final setup for the "Smart Home and Garden" project.

![c1ae03a5-9a61-4cbe-8e7c-e661e3501648](https://github.com/user-attachments/assets/4ca3ef61-d3e9-4f85-bf8a-401af9513a13)

