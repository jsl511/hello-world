void setup() {
  
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  int val=digitalRead(2);
  if(val==HIGH)
  {
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(1000/16);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000/16);                       
  }
  //Josh Lubin

}
