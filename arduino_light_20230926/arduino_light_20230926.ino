int led_1=16;
int led_2=5;
int led_3=19;
int light_sensor=15;

void setup() {
  
  pinMode( led_1, OUTPUT);
  pinMode( led_2, OUTPUT);
  pinMode( led_3, OUTPUT);
  pinMode( light_sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val=analogRead(light_sensor);
  Serial.println(val);
  delay(1000);
  
  if(val>4000){
    digitalWrite(led_1,LOW);
    digitalWrite(led_2,LOW);  
    digitalWrite(led_3,LOW);  
  }else if(val>3700){
    digitalWrite(led_1,HIGH);
    digitalWrite(led_2,LOW);  
    digitalWrite(led_3,LOW);    
  }else if(val>3300){
    digitalWrite(led_1,HIGH);
    digitalWrite(led_2,HIGH);  
    digitalWrite(led_3,LOW);  
  }else{
    digitalWrite(led_1,HIGH);
    digitalWrite(led_2,HIGH);  
    digitalWrite(led_3,HIGH);  
  }
  //delay(1000);
}
