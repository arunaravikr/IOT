int inPin = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int rawVoltage = analogRead(inPin);
  float milliVolts = (rawVoltage/1024.0)*5000;
  float celsius = milliVolts/10;
  Serial.print(celsius);
  Serial.print("Degree Celcius");
  Serial.print((celsius*9)/5+32);
  Serial.println("Degree F");
  delay(1000);
}
