int ledPin = 11;

void setup() {
  pinMode(ledPin,OUTPUT);
}

void loop() {
  int i = 0;
  for(i=0; i<256; i++)
  {
    analogWrite(ledPin, i);
    delay(3);
  }
  for(i=255; i>=0;i--)
  {
    analogWrite(ledPin, i);
    delay(3);
  }
}
