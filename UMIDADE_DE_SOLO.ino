
int adc_value;

void setup()
{
    Serial.begin(9600);
    
    pinMode(A5, INPUT);
    pinMode(A3, OUTPUT);
    pinMode(A2, OUTPUT);
    
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);

   digitalWrite(A3,LOW);
   digitalWrite(A2,HIGH); 
}

void loop()
{
    analogWrite(5,0);
    adc_value = analogRead(A5);          
    delay(100);
    Serial.println(adc_value);


   if(adc_value >800){
     digitalWrite(2,HIGH);
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     analogWrite(5,150);
     delay(200);
   }

   if(adc_value >301 && adc_value <799){
     digitalWrite(2,LOW);
     digitalWrite(3,HIGH);
     digitalWrite(4,LOW);
   }

   if(adc_value <300){
     digitalWrite(2,LOW);
     digitalWrite(3,LOW);
     digitalWrite(4,HIGH);
   }

   
} 
