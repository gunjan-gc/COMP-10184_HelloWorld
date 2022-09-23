//  I Gunjan Chaudhary, 000831804 certify that this material is my original work. No other person's work has been used without due acknowledgement. I have not made my work available to anyone else.

#include <Arduino.h>

unsigned long timeInMillis;

void setup() {
  
  //start the USB serial minitor port
  Serial.begin(115200);


  //print some text to the USB port
  Serial.println("\n\nHello, World!");
  Serial.println("\n\nName: Gunjan Chaudhary, Std ID: 000831804");
  Serial.println("ESP8266 Chip ID: " + String(ESP.getChipId()));
  Serial.println("Flash Chip ID: " + String(ESP.getFlashChipId()));
}

void loop() {
  // put your main code here, to run repeatedly:
  timeInMillis = millis();


  Serial.println("Time since D1 Mini startred: "+ String(timeInMillis));
  delay(2000);      //waits every 2 seconds for loop to go for next iteration
}