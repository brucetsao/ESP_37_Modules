#define APin A0
#define DPin 15
#define LedPin 2

   int val = 0 ;
void setup() 
{ 
pinMode(LedPin,OUTPUT);//設置數位IO腳模式，OUTPUT為Output 
 pinMode(DPin,INPUT);//定義digital為輸入介面
 
  Serial.begin(115200);//設定串列傳輸速率為115200
}
void loop() {

   val=analogRead(APin);//讀取感測器的值 
    Serial.print(val);//輸出模擬值，並將其列印出來
    Serial.print("\n");//輸出模擬值，並將其列印出來
 
} 
