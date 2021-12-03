#include<SoftwareSerial.h>
//#include<NewPing.h>

int sensorPin = A0; 
int sensorValue = 0; 
int led = 9; 
int buzzer = 12; 
void setup() {
pinMode(led, OUTPUT);
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
}
void loop()
{

sensorValue = analogRead(sensorPin);
Serial.println(sensorValue);
if (sensorValue < 100)
{
Serial.println("Fire Detected");
Serial.println("LED on");
digitalWrite(led,HIGH);
tone(buzzer,2000,1000);
delay(1000);
}
digitalWrite(led,LOW);
digitalWrite(buzzer,LOW);
delay(sensorValue);
}
