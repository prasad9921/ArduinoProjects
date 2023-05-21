void setup() {
  // put your set
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(analogRead(A5));
delay(1000);
}
