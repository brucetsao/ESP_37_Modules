#define LED_red 17
void setup() {
pinMode(LED_red,OUTPUT);
}

void loop() {
digitalWrite(LED_red,HIGH);
delay(1000);
digitalWrite(LED_red,LOW);
delay(1000);
}
