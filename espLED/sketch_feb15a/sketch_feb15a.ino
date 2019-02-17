void blinkBlue(int onoff) {
  int pin = 2;
  if(onoff == 1)
    digitalWrite(pin, HIGH);
  if(onoff == 0)
    digitalWrite(pin, LOW);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(BUILTIN_LED, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  blinkBlue(1);
  int sensorValue = analogRead(A0);
  float outputVolt = (sensorValue * 3.300)/1023;
  Serial.print("Sensorvalue:");
  Serial.println(sensorValue);
  Serial.print(outputVolt);
  Serial.println("V");
  //digitalWrite(2, HIGH);
  delay(500);
  blinkBlue(0);
  //digitalWrite(2, LOW);
  delay(100);
  //digitalWrite(BUILTIN_LED, LOW);
  //delay(500);
  //digitalWrite(BUILTIN_LED, HIGH);

}
