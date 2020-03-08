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
	Serial.print("Current Temperature = ");
	Serial.print(DHT.temperature + " Degrees C\n");
	Serial.print("Current Humidity =");
	Serial.print(DHT.humidity+"%");
	delay(5000); //wait 5 seconds before accessing sensor again
}
