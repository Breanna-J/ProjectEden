#include <Arduino.h>
#include "soilReadingDeclaration.hpp"
#include "soilReadingDefinitions.cpp"

void setup() {
  Serial.begin(115200);
  delay(1000); // Wait for serial monitor to open

  Serial.println();
  Serial.println("Project Eden V1"); //the project is started
  Serial.println("Sensor test initialized");

}

void loop() {
  int soilMoistureRaw = readSoilMoistureRaw(); // Read the raw value from the soil moisture sensor
  Serial.print("Soil Moisture Value: ");
  Serial.print(calculateSoilMoisturePercentage(soilMoistureRaw));
  Serial.println("%"); // Print the soil moisture percentage to the serial monitor
   // the moisture percentage is calculated and printed to the serial monitor
  delay(5000); // Delay for 5 seconds

}

