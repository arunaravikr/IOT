#include<Servo.h>
Servo myservo;
int pos=0;
int m=0;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(8);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int m= analogRead(A0);
  delay(200);
  Serial.println(m);
  if (m>=980)
  {
      Serial.println("asdasd");

  for(pos =0; pos<=180;pos+=1)
  {
    myservo.write(pos);
    delay(1);
  }
  for(pos =180; pos>=0;pos-=1)
  {
    myservo.write(pos);
    delay(1);
  }  
  }
  
}
