#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(1000); // Wait for serial monitor to open

  Serial.println();
  Serial.println("Project Eden V1 initialized"); //the project is started

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("System is running..."); // the project is working
  delay(1000); // Delay for 1 second

}

