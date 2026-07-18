#include <Arduino.h>
#include "soilReadingDeclaration.hpp"

constexpr int SOIL_PIN = 34; // ESP32 pin connected to the soil moisture sensor (pin 34 allows an analog input)

int readSoilMoistureRaw() {
  // Read the raw value from the soil moisture sensor
  return analogRead(SOIL_PIN);
}

int calculateSoilMoisturePercentage(int rawValue) {
  const int dryValue = 3300; // Raw value when the soil is completely dry
  const int wetValue = 1200;     // Raw value when the soil is completely wet

  int percentage = map(rawValue, dryValue, wetValue, 0, 100); // Map the raw value to a percentage (0-100)
   return constrain(percentage, 0, 100);
}
