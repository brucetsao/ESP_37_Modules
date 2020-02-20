int incomingByte = 0;   // for incoming serial data
void setup() {
  Serial.begin(115200);//設置串列傳輸速率為115200 bps
  pinMode(LED_BUILTIN,OUTPUT);//ESP32-WROOM-32D开发板的内置LED在第九引脚上，所以这里我们驱动D9
}
void loop() {
   if (Serial.available() > 0) {
                // read the incoming byte:
                while (Serial.available() > 0)
                  {
                      incomingByte = Serial.read();
                     Serial.println(incomingByte,OCT);
                         //OCT for arduino display data in OCT format
                  }
            }
}
