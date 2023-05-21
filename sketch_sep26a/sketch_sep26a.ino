#define LS A1      // left sensor
#define RS A0      // right sensor

/*-------definning Outputs------*/
#define LM1 6       // left motor
#define LM2 7       // left motor
#define RM1 3       // right motor
#define RM2 4       // right motor
int k=150;

void setup()
{
  pinMode(LS, INPUT);
  pinMode(RS, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(analogRead(LS)>k && analogRead(RS)>k)     // Move Forward
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
  }
 
  if(!(analogRead(LS)>k) && analogRead(RS)>k)     // Turn right
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
  }
 
  if(analogRead(LS)>k && !(analogRead(RS)>k))     // turn left
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
  }
 
  if(!(analogRead(LS)>k) && !(analogRead(RS)>k))     // stop
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
  }
  Serial.println(LS);
  Serial.println(RS);
 
}
