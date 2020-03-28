#define relayDPin  15 
#define LEDDPin  4 

void setup() 
{ 

 pinMode(relayDPin,OUTPUT);
 pinMode(LEDDPin,OUTPUT);
 
  Serial.begin(115200);//設定串列傳輸速率為115200

}
void loop() {
  digitalWrite(LEDDPin,HIGH);
         Serial.println("Open Relay & Turn on Led");
         digitalWrite(relayDPin,HIGH);
        delay(3000);  
//-------------------------------------
         Serial.println("Close Relay & Turn OFF Led");
         digitalWrite(relayDPin,LOW);
        delay(1000);  
}
