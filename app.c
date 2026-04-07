void setup(){
  pinMode(12,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop(){

  digitalWrite(12,HIGH);
  delay(2500);
  
  digitalWrite(12,LOW);
  delay(400);

  digitalWrite(7,HIGH);
  delay(1500);
  
  digitalWrite(7,LOW);
  delay(400);
  
  digitalWrite(3,HIGH);
  delay(2500);
            
  digitalWrite(3,LOW);
  delay(2500);
}
