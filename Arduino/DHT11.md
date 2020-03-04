# DHT 11
******

- Temperature and Humidity Sensor

- Comes in two forms: 3-pin (this is the one we will be using) and 4-pin. Both w
ork the same way. Personally, I find the 3-pin one easier to work with.

Note the labels on the pins of the DHT11. These will guide us to wire it into the Arduino Boards.

## A brief description of the pinout

The sensor has 3 pins: VCC, DATA and GND

- VCC: 5V Positive line. This provides the sensor with Power directly from the Arduino in the same way we saw last week with the LEDs.

- DATA: This is what carries our actual reading(s) from the sensor to the Arduino board.

- GND: Ground Negative line. This completes the circuit with the 5V from VCC.

## Circuit Diagram

  ![Created with Fritzing](https://raw.githubusercontent.com/XeroHero/Coderdojo-UCD/master/Arduino/DHT11.jpg)
  
  We are going to ignore the pin 3 on the sensor shown in the diagram as the sensors we have only have 3 pins. The connections still remain identical.
  
## Code
```
#include "DHT.h" 	// DHT sensor library

#define DHT_PIN 2    // The pin on which our sensor DATA line is connected

//define our sensor type

#define DHT_TYPE DHT11 	// DHT 11 


DHT dht(DHT_PIN, DHT_TYPE); 
void setup() {
  Serial.begin(9600); 
  Serial.println("DHT11 test!");
 
  dht.begin();
}

void loop() {

  delay(2000); //give the sensor time to restart itself after each reading

//read humidity
  float h = dht.readHumidity();
//read temperature
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {       
    Serial.println("Error: bad read!"); // in case there are problems with the sensor, it's often a good idea to add some code to handle such unexpected events
    return;
  }

  Serial.print("Humidity: "); 
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: "); 
  Serial.print(t);
  Serial.print(" *C ");

}
```

