void setup() {
 pinMode(6,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
    analogWrite(6,10);
    delay(300);
    analogWrite(6,50);
    delay(200);
    analogWrite(6,100);
    delay(200);
    analogWrite(6,150);
    delay(200);
    analogWrite(6,200);
    delay(200);
    analogWrite(6,350);
    delay(200);
    analogWrite(6,500);
    delay(200);
    analogWrite(6,750);
    delay(200);
}
