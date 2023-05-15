#define cr A4
void setup() {
  // put your setup code here, to run once:
   pinMode(cr, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int c=analogRead(cr);
Serial.println(c);
delay(500);
}
