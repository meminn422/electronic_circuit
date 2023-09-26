int ledpin=16;
int inpin=15;

int ledpin2=18;
int inpin2=19;
int val;
int val2;
void setup() {
  // put your setup code here, to run once:
  pinMode( ledpin, OUTPUT);
  pinMode( inpin, INPUT);
  pinMode( ledpin2, OUTPUT);
  pinMode( inpin2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=digitalRead(inpin);
  val2=digitalRead(inpin2);
 if(val==LOW){
    digitalWrite(ledpin,LOW);    
  }
  else{
    digitalWrite(ledpin,HIGH);        
  }

  if(val2==LOW){
    digitalWrite(ledpin2,LOW);    
  }
  else{
    digitalWrite(ledpin2,HIGH);        
  }
}
