#define LaserPin 4

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LaserPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LaserPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);                       // wait for a second
  digitalWrite(LaserPin, LOW);    // turn the LED off by making the voltage LOW
  delay(3000);                       // wait for a second
}
