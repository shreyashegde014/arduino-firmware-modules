int smoke = 0 ;
void setup()
{
    Serial.begin(9600);
    pinMode(7,INPUT);    
    pinMode(6,OUTPUT);  
    pinMode(5,OUTPUT);   
}
void loop() 
{
  smoke = digitalRead(7);  
  Serial.println(smoke);    
  delay(100);
  
    if(smoke == 0 )
  {
    digitalWrite(6,HIGH); 
    digitalWrite(5,LOW);   
  } 
  
   if(smoke == 1 )
  {
    digitalWrite(6,LOW);     
    digitalWrite(5,HIGH);   
  } 
  }