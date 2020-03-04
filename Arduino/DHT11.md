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
``
    #include <dht.h>

#define DHT_PIN A0 //analog pin for sensor

dht DHT;

void setup(){

        Serial.begin(9600);
        delay(500); //system boot 0.5sec delay
        Serial.println("DHT11 Humidiity & Temperature Sensor Excercise 1\n\n");
        delay(1000); //sensor access delay
}

void loop(){
        DHT.read11(DHT_PIN);
        Serial.print("Current Temperature = ");q
        Serial.print(DHT.temperature + " Degrees C\n");
        Serial.print("Current Humidity =");
        Serial.print(DHT.humidity+"%");
        delay(5000); //wait 5 seconds before accessing sensor again
}
``

