void setup()
{
pinMode(0, OUTPUT);
pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
digitalWrite(7, 0); // Make pin "dp" off in all digit
}
void loop()
{
// Display Digit '0'
digitalWrite(0, 1);
digitalWrite(1, 1);
digitalWrite(2, 1);
digitalWrite(3, 1);
digitalWrite(4, 1);
digitalWrite(5, 1);
digitalWrite(6, 0);
delay(1000);
// Display Digit '1'
digitalWrite(0, 0);
digitalWrite(1, 1);
digitalWrite(2, 1);
digitalWrite(3, 0);
digitalWrite(4, 0);
digitalWrite(5, 0);
digitalWrite(6, 0);
delay(1000);
// Display Digit '2'
digitalWrite(0, 1);
digitalWrite(1, 1);
digitalWrite(2, 0);
digitalWrite(3, 1);
digitalWrite(4, 1);
digitalWrite(5, 0);
digitalWrite(6, 1);
delay(1000);
// Display Digit '3'
digitalWrite(0, 1);
digitalWrite(1, 1);
digitalWrite(2, 1);
digitalWrite(3, 1);
digitalWrite(4, 0);
digitalWrite(5, 0);
digitalWrite(6, 1);
delay(1000);
// Display Digit '4'
digitalWrite(0, 0);
digitalWrite(1, 1);
digitalWrite(2, 1);
digitalWrite(3, 0);
digitalWrite(4, 0);
digitalWrite(5, 1);
digitalWrite(6, 1);
delay(1000);
// Display Digit '5'
digitalWrite(0, 1);
digitalWrite(1, 0);
digitalWrite(2, 1);
digitalWrite(3, 1);
digitalWrite(4, 0);
digitalWrite(5, 1);
digitalWrite(6, 1);
delay(1000);
// Display Digit '6'
digitalWrite(0, 1);
digitalWrite(1, 0);
digitalWrite(2, 1);
digitalWrite(3, 1);
digitalWrite(4, 1);
digitalWrite(5, 1);
digitalWrite(6, 1);
delay(1000);
// Display Digit '7'
digitalWrite(0, 1);
digitalWrite(1, 1);
digitalWrite(2, 1);
digitalWrite(3, 0);
digitalWrite(4, 0);
digitalWrite(5, 0);
digitalWrite(6, 0);
delay(1000);
// Display Digit '8'
digitalWrite(0, 1);
digitalWrite(1, 1);
digitalWrite(2, 1);
digitalWrite(3, 1);
digitalWrite(4, 1);
digitalWrite(5, 1);
digitalWrite(6, 1);
delay(1000);
// Display Digit '9'
digitalWrite(0, 1);
digitalWrite(1, 1);
digitalWrite(2, 1);
digitalWrite(3, 1);
digitalWrite(4, 0);
digitalWrite(5, 1);
digitalWrite(6, 1);
delay(1000);
}
