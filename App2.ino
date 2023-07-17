f#include <ESP32_Servo.h>

//This example code is in the Public Domain (or CC0 licensed, at your option.)
//By Evandro Copercini - 2018
//
//This example creates a bridge between Serial and Classical Bluetooth (SPP)
//and also demonstrate that SerialBT have the same functionalities of a normal Serial

#include "BluetoothSerial.h"



#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

BluetoothSerial SerialBT;
Servo servo1;  // create servo object to control a servo
// twelve servo objects can be created on most boards
Servo servo2;
int pos = 90;
int speedval = 0;
int speedval1 = 0;
void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32test"); //Bluetooth device name
  Serial.println("The device started, now you can pair it with bluetooth!");
  servo1.attach(2);
  servo2.attach(4);  
  //servo1.write(pos);
  //servo2.write(pos);
  
}

void loop() {
  while (SerialBT.available()) {
    String in_char = SerialBT.readStringUntil(':'); // read until the newline
    String in_char1 = SerialBT.readStringUntil('\n'); // read until the newline
    //SerialBT.write(1);
    int pitch, roll;
    pitch = in_char.toInt();
    roll = in_char1.toInt();
    Serial.print(roll);
    Serial.print("  ");
    /*
    if (pitch >= 30) {
      pitch = 30;
      
    }
    if ((pitch <= -30)) {
      pitch = -30;
    }
    
    if (roll >= 30) {
      roll = 30;
      
    }
    if ((roll <= -30)) {
      roll = -30;
    }
    */
      
    speedval = pitch + pos;
    speedval1 = roll  + pos;
    servo1.write(speedval);
    servo2.write(speedval1);
    Serial.print(pitch);
    Serial.print("  ");
    //Serial.println(speedval);
    Serial.print(roll);
    Serial.print("  ");
    //Serial.println(speedval1);
    delay(60);
    SerialBT.write(1);
    
  }
}
