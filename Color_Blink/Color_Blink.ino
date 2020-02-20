#define LedPin 4
void setup() {                
  // initialize the digital pin as an output.
  // Pin  10 has an LED connected on most ESP32 boards:
  pinMode(LedPin, OUTPUT);     
}

void loop() {
  digitalWrite(LedPin, HIGH);   // set the LED on
  delay(5000);              // wait for a second
  digitalWrite(LedPin, LOW);    // set the LED off
  delay(1000);              // wait for a second
}
