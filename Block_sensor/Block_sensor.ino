#define DPin 15
#define LedPin 2

 
   int val = 0 ;
  int oldval =-1  ;
void setup() 
{ 
pinMode(LedPin,OUTPUT);//設置數位IO腳模式，OUTPUT為Output 
 pinMode(DPin,INPUT);//定義digital為輸入介面
 digitalWrite(DPin,LOW) ;
  Serial.begin(9600);//設定串列傳輸速率為9600
}
void loop() {

   val=digitalRead(DPin);
    Serial.print(oldval);
    Serial.print("/");
    Serial.print(val);
    Serial.print("\n");
 
    if (val ==0)
    {
          if (val != oldval)
            {
                 digitalWrite(LedPin,HIGH)  ; 
                   delay(2000);  
                  oldval= val ;
            }
    }
    else
    {
          if (val != oldval)
            {
               digitalWrite(LedPin,LOW)  ; 
                oldval= val ;
            }
      }
 

} 
