#include <Arduino.h>
#include "humidityTempDeclaration.hpp"

constexpr int HUMIDITY_SENSOR_PIN = 26; // ESP32 pin connected to the humidity sensor (pin 35 allows an analog input)
int readHumiditySensorData() {
  return analogRead(HUMIDITY_SENSOR_PIN); // Example: Read from the defined pin
}