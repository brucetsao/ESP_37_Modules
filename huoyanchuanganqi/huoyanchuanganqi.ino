#define flameDPin  15  
#define LedPin 13
 
void setup() 
{ 
pinMode(LedPin,OUTPUT);
 pinMode(flameDPin,INPUT);
 

  Serial.begin(115200);//設定串列傳輸速率為115200  
}
void loop() {
  int val ;
   val=digitalRead(flameDPin);//讀取火焰感測器的模擬值 
   
    Serial.println("val:");
    Serial.println(val);//輸出模擬值，並將其列印出來
 
    if (val ==  1)
    {
           digitalWrite(LedPin,HIGH) ; 
    }
    else
    {
           digitalWrite(LedPin,LOW) ; 
    }
    
  delay(200);  
}
