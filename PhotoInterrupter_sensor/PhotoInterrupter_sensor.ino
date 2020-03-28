  #define PhotoInterrupterSensor 4 //定义水银倾斜开关传感器接口
  #define LedPin 2 //定义LED 接口int val;//定义数字变量val
  void setup()
  {
    pinMode(LedPin, OUTPUT); //定义LED 为输出接口
    pinMode(PhotoInterrupterSensor, INPUT); //定义倾斜开关传感器为输出接口
  
    Serial.begin(115200);
  }
  void loop()
  {
    val = digitalRead(PhotoInterrupterSensor); //将数字接口15的值读取赋给val
    if (val == HIGH) //当倾斜开关传感器检测有信号时，LED 闪烁
    {
      digitalWrite(LedPin, HIGH);
    }
    else
    {
      digitalWrite(LedPin, LOW);
    }
    Serial.print("val:");
    Serial.println(val, HEX);
  }
