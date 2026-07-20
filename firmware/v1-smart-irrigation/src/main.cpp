#include <Arduino.h>
#include "soilReadingDeclaration.hpp"
#include "humidityTempDeclaration.hpp"

void setup() {
  
  Serial.begin(115200);
  delay(1000); // Wait for serial monitor to open

  initializeHumiditySensor(); // Initialize the humidity sensor
  delay(1000); // Wait for the sensor to stabilize
  
  Serial.println();
  Serial.println("Project Eden V1"); //the project is started
  Serial.println("Sensor test initialized");

}

void loop() {
  int soilMoistureRaw = readSoilMoistureRaw(); // Read the raw value from the soil moisture sensor
  Serial.println("---------Zone1 Readings:---------");
   // the moisture percentage is calculated and printed to the serial monitor
  Serial.print("Soil Moisture Value: ");
  Serial.println(soilMoistureRaw); // Print the raw value to the serial monitor
  Serial.print("Soil Moisture Percentage: ");
  Serial.print(calculateSoilMoisturePercentage(soilMoistureRaw)); // Calculate and print the soil moisture percentage to the serial monitor
  Serial.println("%"); // Print the soil moisture percentage to the serial monitor
  HumidityTempData climate = readHumidityAndTemperatureData();
  if(climate.isValid){
    Serial.print("Humidity: ");
    Serial.print(climate.humidity);
    Serial.println("%");
    Serial.print("Temperature: ");
    Serial.print(climate.temperatureC);
    Serial.println("°C");
    Serial.print("Temperature: ");
    Serial.print(climate.temperatureF);
    Serial.println("°F");
  } else {
    Serial.println("Failed to read from DHT sensor!");
  }
  Serial.println("---------------------------------");
  delay(5000); // Delay for 5 seconds

}

