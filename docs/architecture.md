# Project Eden Architecture
Project Eden follows a modular architecture to separate hardware-specific functionality from application logic. This improves readability, simplifies testing, and allows individual components to be replaced or expanded without requiring major changes to the rest of the system.
---

## V1

### Hardware Architecture

![image of hardware architecture flowchart](/media/images/v1HardwareArchitecture.png)


### Application Architecture

![image of application architecture flowchart](/media/images/v1ApplicationArchitecture.png)

**State Machine**
- Determines the current operating state of the irrigation system.
- Possible States
- - Startup
- - Monitoring
- - Watering
- - Fault

**Sensor Driver**
- Reads soil moisture and converts raw ADC values into usable measurements.

**Pump Controler**
- Controls the relay responsible for turning the water pump on and off.

**LED Manager**
- Provides visual feedback about system status.

**UART Manager**
- Outputs diagnostic and debugging information over the serial interface.

**Configuration**
- Stores Configurable values.
- - Moisture threshold
- - Watering duration
- - Sampling interval

---