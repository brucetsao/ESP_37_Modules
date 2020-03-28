#define APin  A13
float temperature = 0;
long value = 0;


void setup() {
  Serial.begin(9600); //設置串口波特率9600
}

void loop() {
  value = analogRead(APin); //讀取模擬輸入

  //電壓與攝氏度轉換：
  //5/4096=0.001220703125，（0~5V）對應模擬口讀數（0~4095），相當於10mv/1℃
  temperature = (value * 0.01220703125);

  Serial.println("Temper=");
  Serial.print(  temperature);
  Serial.println("℃");
  delay(500);
} 
