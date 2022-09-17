// C++ code
//
int echoout=2;
int echoin=3;
int buzzer=12;
int time,distance;
int motion=5;
int m;

void setup()
{
  Serial.begin(9600);
  pinMode(echoout,OUTPUT);
  pinMode(echoin,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(motion,INPUT);
}


void loop()
{
  digitalWrite(echoout,HIGH);
  digitalWrite(echoout,LOW);
  time=pulseIn(echoin,HIGH);
  m=digitalRead(motion);
 
  distance=(time*0.034)/2;
  
 
  

if(distance<20)
{
  Serial.println("calling bell ring");
   Serial.println(distance);
  digitalWrite(buzzer,HIGH);
  delay(5000);


}
  else{
      Serial.println("calling bell stop");
     Serial.println(distance);
    digitalWrite(buzzer,LOW);
    delay(1000);
  }
  if(m){
    digitalWrite(8,HIGH);
    Serial.println("light is on");
    delay(5000);
  }
  else{
    digitalWrite(8,LOW);
   Serial.println("light is off");
  }
}
