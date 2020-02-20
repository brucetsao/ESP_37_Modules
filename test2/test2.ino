
int TIMER1A,TCCR1A,COM1A1;
void analogWrite(uint8_t pin,int val)
{
  if (digitalPinToTimer(pin)==TIMER1A)
  {
    sbi(TCCR1A,COM1A1);
    OCR1A=val;
    }
    else if (digitalPinToTimer(pin)==TIMER1B)
    {
      sbi(TCCR1A,COM1B1);
      OCR1B=val;
      }
      else if (digitalPinToTimer(pin)==TIMER0A)
      {
        if(val==0)
        {
          digitalWrite(pin,LOW);
          }
          else
          {
            sbi(TCCR1A,COM1A1);
            OCR0A=val;
            }
        }
        else if(digitalPinToTimer(pin)==TIMER0B)
        if (val==0)
        {digitalWrite(pin,LOW);
          } 
         else
         {
          sbi(TCCR0A,COM0B1);
          OCROB=val;
          }
  
  else if (digitalPinToTimer(pin)==TIMER2A)
  {
    sbi(TCCR2A,COM2A1);
    OCR2A=val;
    }
  else if (digitalPinToTimer(pin)==TIMER2B)
  {
    sbi(TCCR2A,COM2B1);
    OCR2B=val;
    }
   else if (val<128)
    digitalWrite(pin,LOW);
   else
   digitalWrite(pin,HIGH);
   }
