#Project Eden Requirements

##Functional Requirements

- The system will measure soil moisture every 5 minutes.
- The system will activate the pump when the moisture is below the configured threshold.
- The system will stop watering after a configurable duration.
- The system will indicate system status using LEDs.
- The system will output diagnostic information over UART.

##Non-Functional Requirements

- Startup time less than 5 seconds.
- Firmware will continue operating if a sensor reading fails.
- Code will be modular and documented.
- Moisture readings and watering duration will be configurable.