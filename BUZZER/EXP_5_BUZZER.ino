void setup()
{
pinMode(9,OUTPUT);
}
void loop()
{
tone(9, 900);
delay(500);
tone(9, 700);
delay(500);
tone(9, 550);
delay(500);
noTone(9);
delay(500);
}
