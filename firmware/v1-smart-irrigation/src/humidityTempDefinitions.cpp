#include <Arduino.h>
#include <DHT.h> // Include the DHT sensor library
#include "humidityTempDeclaration.hpp"


namespace{
    constexpr int DHT_PIN = 26; // Pin connected to DTH sensor
    constexpr int DHT_TYPE = DHT22; // DHT sensor type (DHT22)
    DHT dht(DHT_PIN, DHT_TYPE); // Create a DHT object
}

void initializeHumiditySensor() {
    dht.begin(); // Initialize the DHT sensor
}

HumidityTempData readHumidityAndTemperatureData() {
    HumidityTempData data;
    data.humidity = dht.readHumidity();
    data.temperatureC = dht.readTemperature();
    data.temperatureF = (data.temperatureC * 9.0 / 5.0) + 32.0;
    data.isValid = !isnan(data.humidity) && !isnan(data.temperatureC);
    return data;
}