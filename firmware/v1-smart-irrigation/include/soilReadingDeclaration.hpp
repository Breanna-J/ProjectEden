#pragma once //makes sure this file is only included once in the build process

// These are the definitions for the soil reading functions. They will call for the raw data and the calculated soil moisture percentage.
int readSoilMoistureRaw();

int calculateSoilMoisturePercentage(int rawValue);