#define buttonpin 15 //定义水银倾斜开关传感器接口
int Led=13;//定义LED 接口
int val;//定义数字变量val
void setup()
{
pinMode(Led,OUTPUT);//定义LED 为输出接口
pinMode(buttonpin,INPUT);//定义水银倾斜开关传感器为输出接口

Serial.begin(115200);
}
void loop()
{
val=digitalRead(buttonpin);//将数字接口15的值读取赋给val
if(val==HIGH)//当水银倾斜开关传感器检测有信号时，LED 闪烁
{
digitalWrite(Led,HIGH);
}
else
{
digitalWrite(Led,LOW);
}
Serial.print("val:");
Serial.println(val,HEX);
}
