int green = 2;
int orange = 3;
int red = 4;

void setup() {                
  // initialize the digital pin as an output.
  pinMode(red, OUTPUT);     
  pinMode(orange, OUTPUT);     
  pinMode(green, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(red, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10000);               // wait for a second
  digitalWrite(red, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(green, HIGH);
  delay(10000);               // wait for a second
  digitalWrite(green, LOW);
  digitalWrite(orange, HIGH);
  delay(1000);             
  digitalWrite(orange, LOW);  // wait for a second
  
}
