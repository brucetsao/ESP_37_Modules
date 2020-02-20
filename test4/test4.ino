#define LED_red 17
void setup() {
  // put your setup code here, to run once:
pinMode(LED_red,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED_red,HIGH);
delay(1000);
digitalWrite(LED_red,LOW);
delay(1000);
}
