void setup(){
  pinMode(2,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(8,INPUT); 
  pinMode(11,INPUT);
  pinMode(12,INPUT);
}

void loop(){
  if(digitalRead(8) == HIGH){
  	digitalWrite(2,HIGH);
  	digitalWrite(5,LOW);
	}
   if(digitalRead(11) == HIGH){
  	digitalWrite(2,LOW);
  	digitalWrite(5,LOW);
  	}
   if(digitalRead(12) == HIGH){
  	digitalWrite(5,HIGH);
  	digitalWrite(2,LOW);
  	}
}