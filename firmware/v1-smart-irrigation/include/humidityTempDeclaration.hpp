#pragma once //makes sure this file is only included once in the build process

struct HumidityTempData{// Structure to hold humidity and temperature data
    float humidity;
    float temperatureC;
    float temperatureF;
    bool isValid;
};

void initializeHumiditySensor();

HumidityTempData readHumidityAndTemperatureData();