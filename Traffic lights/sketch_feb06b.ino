void setup() {
  // put your setup code here, to run once:
  //light 1
pinMode(12,OUTPUT);  //Red 1
pinMode(10,OUTPUT);  //Yellow 1
pinMode(8,OUTPUT);   //Green 1
 //light 2
pinMode(5,OUTPUT);   //Red 2
pinMode(3,OUTPUT);  //Yellow 2
pinMode(1,OUTPUT);  //Green 2
}

void loop() {
  // put your main code here, to run repeatedly:
changeLights();
delay(15000);
}
void changeLights(){
  digitalWrite(8,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(3,HIGH);
  delay(5000);
  digitalWrite(10,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(1,HIGH);
  delay(5000);
  digitalWrite(10,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(1,LOW);
  delay(3000);
  digitalWrite(8,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);
  digitalWrite(3,LOW);
  digitalWrite(5,HIGH);
  delay(5000);
}