#define Led 13//定义LED 接口
#define buttonpin 15//定义光遮断传感器接口
int val;//定义数字变量val
void setup()
{
pinMode(Led,OUTPUT);//定义LED 为输出接口
pinMode(buttonpin,INPUT);//定义光遮断传感器为输出接口

Serial.begin(115200);
}
void loop()
{
val=digitalRead(buttonpin);//将数字接口15的值读取赋给val
if(val==HIGH)//当光遮断传感器检测有信号时，LED 闪烁
{
digitalWrite(Led,LOW);
}
else
{
digitalWrite(Led,HIGH);
}
Serial.print("val:");
Serial.println(val,HEX);
}
