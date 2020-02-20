#include <Arduino.h>
#include <analogWrite.h>

#define ZPin 0
#define LedPin1 13
#define LedPin2 12
#define XPin A13
#define YPin A12
 
   int val1 = 0 ;
   int val2 = 0 ;
   int val3 = 0 ;
void setup() 
{ 
pinMode(LedPin1,OUTPUT);//設置數位IO腳模式，OUTPUT為Output 
pinMode(LedPin2,OUTPUT);//設置數位IO腳模式，OUTPUT為Output 
 pinMode(ZPin,INPUT);//定義digital為輸入介面
 //pinMode(XPin,INPUT);//定義為類比輸入介面
// pinMode(YPin,INPUT);//定義為類比輸入介面

 

  Serial.begin(115200);//設定串列傳輸速率為115200
}
void loop() 
{
   val1=analogRead(XPin);
   val2=analogRead(YPin);
   val3=digitalRead(ZPin);
    Serial.print(val1);
    Serial.print("/");
    Serial.print(val2);
    Serial.print("/");
    Serial.print(val3);
    Serial.print("\n");

       //-------------
       analogWrite(LedPin1,map(val1,0,1023,0,255)) ;
       analogWrite(LedPin2,map(val2,0,1023,0,255)) ;
         delay(10);  
} 
