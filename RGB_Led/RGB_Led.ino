uint8_t ledR = A4;
uint8_t ledG = A5;
uint8_t ledB = A18; 

uint8_t ledArray[3] = {1, 2, 3}; 
const boolean invert = true;
uint8_t color = 0;          
uint32_t R, G, B;           
uint8_t brightness = 255; 
// the setup routine runs once when you press reset:
void setup() 
{            
  Serial.begin(115200);
  delay(10); 
  
  ledcAttachPin(ledR, 1); 
ledcAttachPin(ledG, 2);
  ledcAttachPin(ledB, 3);
  ledcSetup(1, 12000, 8);  
ledcSetup(2, 12000, 8);
  ledcSetup(3, 12000, 8);
}
void loop() 
{
  Serial.println("Send all LEDs a 255 and wait 2 seconds.");
  
  ledcWrite(1, 255);
  ledcWrite(2, 255);
  ledcWrite(3, 255);
  delay(2000);
  Serial.println("Send all LEDs a 0 and wait 2 seconds.");
  ledcWrite(1, 0);
  ledcWrite(2, 0);
  ledcWrite(3, 0);
  delay(2000);
 
  Serial.println("Starting color fade loop.");
  
 for (color = 0; color < 255; color++) { 
  hueToRGB(color, brightness);  
  ledcWrite(1, R); 
  ledcWrite(2, G);   
  ledcWrite(3, B); 
 
  delay(100);
 }
 
}


void hueToRGB(uint8_t hue, uint8_t brightness)
{
    uint16_t scaledHue = (hue * 6);
    uint8_t segment = scaledHue / 256;
                                           
    uint16_t segmentOffset =
      scaledHue - (segment * 256); 
    uint8_t complement = 0;
    uint16_t prev = (brightness * ( 255 -  segmentOffset)) / 256;
    uint16_t next = (brightness *  segmentOffset) / 256;

    if(invert)
    {
      brightness = 255 - brightness;
      complement = 255;
      prev = 255 - prev;
      next = 255 - next;
    }

    switch(segment ) {
    case 0:      // red
        R = brightness;
        G = next;
        B = complement;
    break;
    case 1:     // yellow
        R = prev;
        G = brightness;
        B = complement;
    break;
    case 2:     // green
        R = complement;
        G = brightness;
        B = next;
    break;
    case 3:    // cyan
        R = complement;
        G = prev;
        B = brightness;
    break;
    case 4:    // blue
        R = next;
        G = complement;
        B = brightness;
    break;
   case 5:      // magenta
    default:
        R = brightness;
        G = complement;
        B = prev;
    break;
    }
}
