# Accelerometer controlled Maze
This is a Maze that is controlled by the position of your phone's accelerometer. The Maze moves with the two servos connected, and in order to communicate to the phone wirelessly there is a ESP32 that has a WiFi Module. 

| **Engineer** | **School** | **Area of Interest** | **Grade** |
|:--:|:--:|:--:|:--:|
| Achintya P. | Summit Denali High School | Electrical Engineering | Incoming Sophomore

![Headstone Image](https://bluestampengineering.com/wp-content/uploads/2016/05/improve.jpg)
  
# Final Milestone
IN CONSTRUCTION! 

[![Final Milestone]( )](){:target="_blank" rel="noopener"}

# Second Milestone
For my second milestone, I had an ESP32 connected to my phone via bluetooth sending accelerometer values from the phone's accelerometer to the serial monitor. With the second Milestone, I had to use the MIT app inventor, Arduino IDE, ESP32 module, and a phone with an accelerometer. When I was trying to send data values between my phone and computer, I ran into a bug about the ESP32 drivers being old and not supported with the Arduino IDE which caused the ESP32 to not be recognized. Also, when I was trying to get the roll and pitch values, the values were not showing up on the serial monitor, but were showing up on the app. In order to solve the accelerometer bug, I had to find what the source of the problem was by using a bluetooth terminal to test whether values were showing up on the ESP32. Once I realized the code was the problem, I looked through the code and found that I had used Serial.begin() instead of SerialBT.begin. The serial bluetooth library has different methods, and functions that can be used. The SerialBT function enables bluetooth while the Serial function doesn't.        

[![Third Milestone]()](IN CONSTRUCTION!){:target="_blank" rel="noopener"}
# First Milestone
  
For my first milestone, I had two servos move based on a input angle value given into the serial monitor of the Arduino IDE. One of the challenges I faced while building the circuit and program was the wiring. When I initially wired up my circuit, I had put the PWM wire numbers mixed up and the servo wires mixed up to. A servo has 3 wires, a ground wire, a power wire, and a PWM wire, which are colored brown, red and yellow respectively. In order to control a servo, PWM waves are sent a small pulses as a way of sending an input to the arduino. Once I started the programming aspect of the project, I learned about the arduino servo library that allows you to control servos with methods such as .attach(), .write(), .read(). The different methods of the servo library allow to do different things such as tell the servo pin connection with .attach(), give a input angle value with .write(), and recieve and input angle value with .read(). When I initally got the servos to move, I realized that they were quite stiff in movement which could be smoothened with a delay and a capacitor. In order to solve the servos' stiffness, I learned that a delay between inputs would allow for the servos to move more smoothly and that a capacitor would do the same as it stores and releases electricity.  

[![First Milestone]()](IN CONSTRUCTION!){:target="_blank" rel="noopener"}
