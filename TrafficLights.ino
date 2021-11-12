int pin_red = 13;
int pin_yellow = 12;
int pin_green = 11;
int d = 1000;
void setup() {
  pinMode(pin_red,OUTPUT);
  pinMode(pin_yellow,OUTPUT);
  pinMode(pin_green, OUTPUT);
}

void loop() {
  digitalWrite(pin_red, HIGH);
  delay(d);
  digitalWrite(pin_red, LOW);
  delay(d/2);
  digitalWrite(pin_yellow, HIGH);
  delay(d);
  digitalWrite(pin_yellow, LOW);
  delay(d/2);
  digitalWrite(pin_green, HIGH);
  delay(d);
  digitalWrite(pin_green, LOW);
  delay(d/2);
}
