#define DPin 15
#define LedPin 2

   int val = 0 ;
  int oldval =0  ;
void setup() 
{ 
pinMode(LedPin,OUTPUT);//設置數位IO腳模式，OUTPUT為Output 
 pinMode(DPin,INPUT);//定義digital為輸入介面 

  Serial.begin(115200);//設定串列傳輸速率為115200
}
void loop() {

   val=digitalRead(DPin);//讀取感測器的值 
    Serial.print(oldval);//輸出模擬值，並將其列印出來
    Serial.print("/");//輸出模擬值，並將其列印出來
    Serial.print(val);//輸出模擬值，並將其列印出來
    Serial.print("\n");//輸出模擬值，並將其列印出來
 
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
