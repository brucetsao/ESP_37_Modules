#define APin A13

   int val = 0 ;
void setup() 
{ 
 pinMode(APin,INPUT);//定義為類比輸入介面
 
  Serial.begin(115200);//設定串列傳輸速率為115200
}
void loop() {

   val=analogRead(APin);//讀取感測器的值 
    Serial.print(val);//輸出模擬值，並將其列印出來
    Serial.print("\n");//輸出模擬值，並將其列印出來
 
} 
