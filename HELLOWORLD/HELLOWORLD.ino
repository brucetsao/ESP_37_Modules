void setup() {
  Serial.begin(115200);//設置串列傳輸速率為115200 bps
  pinMode(LED_BUILTIN,OUTPUT);//ESP32-WROOM-32D开发板的内置LED在第九引脚上，所以这里我们驱动D9
}
void loop() {
  delay(500);
  Serial.println("Hello World!");//打开串口监视器，显示出"Hello World!"字样
}
