void ledcAnalogWrite(uint8_t channel, uint32_t value, uint32_t valueMax = 255) {
  // calculate duty, 8191 from 2 ^ 13 - 1
  uint32_t duty = (8191 / valueMax) * min(value, valueMax);

  // write duty to LEDC
  ledcWrite(channel, duty);
}
#define Led1pin 14    // dual Led Color1 Pin
#define Led2pin 13     // dual Led Color2 Pin
int val;

void setup() {
  pinMode(Led1pin, OUTPUT);
  pinMode(Led2pin, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
for(val=255; val>0; val--)
  {
   ledcAnalogWrite(Led1pin, val);
   ledcAnalogWrite(Led2pin, 255-val);
   delay(15); 
  }
for(val=0; val<255; val++)
  {
   ledcAnalogWrite(Led1pin, val);
   ledcAnalogWrite(Led2pin, 255-val);
   delay(15); 
  }
 Serial.println(val, DEC);
}
