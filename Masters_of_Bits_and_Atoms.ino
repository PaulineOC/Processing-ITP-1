void setup()
{
   Serial.begin(19200);
  pinMode(7,OUTPUT);
pinMode(8, INPUT);
pinMode(10, INPUT);
}

void loop()
{
    if (digitalRead(8) == HIGH){
      if (digitalRead(10) == HIGH){
      digitalWrite(7, LOW);
      }    
      else{
       Serial.print("AA");
       digitalWrite(7,HIGH);
       }
    }
   else{
   digitalWrite(7, LOW); 
  }
}
  
  
