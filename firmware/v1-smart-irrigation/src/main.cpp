#include <Arduino.h>

const int SOIL_MOISTURE_SENSOR_PIN = 34; // ESP32 pin connected to the soil moisture sensor (pin 34 allows an analog input)

void setup() {
  Serial.begin(115200);
  delay(1000); // Wait for serial monitor to open

  Serial.println();
  Serial.println("Project Eden V1"); //the project is started
  Serial.println("Sensor test initialized");

}

void loop() {
  // put your main code here, to run repeatedly:
  int soilMoistureValue = analogRead(SOIL_MOISTURE_SENSOR_PIN); // Read the soil moisture sensor value

  Serial.print("Soil Moisture Value: ");
  Serial.println(soilMoistureValue); // the sensor value is printed to the serial monitor

  delay(1000); // Delay for 1 second

}

