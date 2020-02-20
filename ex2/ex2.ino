/* create a hardware timer */
hw_timer_t * timer = NULL;

/* LED pin */
int led = 14;
/* LED state */
volatile byte state = LOW;
volatile int count=0;
// 我改了每次的執行內容 把count+1  0~999循環
void IRAM_ATTR onTimer(){
   count=(count+1)%1000;
}

void setup() {
  Serial.begin(115200);

  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  /* Use 1st timer of 4 */
  /* 1 tick take 1/(80MHZ/80) = 1us so we set divider 80 and count up */
  timer = timerBegin(0, 80, true);

  /* Attach onTimer function to our timer */
  timerAttachInterrupt(timer, &onTimer, true);

  /* Set alarm to call onTimer function every second 1 tick is 1us
  => 1 second is 1000000us */
  /* Repeat the alarm (third parameter)  把 1000000改100 變成0.1ms執行一次*/
  timerAlarmWrite(timer, 100, true);

  /* Start an alarm */
  timerAlarmEnable(timer);
  Serial.println("start timer");
}

void loop() {
	int duration =100,no=0;
	//控制亮滅
	if (count==0) digitalWrite(led, HIGH);
	if (count==duration) 
	{
		digitalWrite(led, LOW);	
		no++;  //每次結束no+1
	}
	//以下控制週期 duration，duration越大越亮
	if (no ==10)
	{
		no=0;
		duration = duration%900+100;   //duration會 100, 200, 300, ... , 900循環
	}
	
	
	
	
	
	

}