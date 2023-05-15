void setup() {
  pinMode(0,OUTPUT);
  pinMode(9,INPUT);
}

void loop() {
  Serial.begin(9000);
  Serial.println(digitalRead(9));
}
