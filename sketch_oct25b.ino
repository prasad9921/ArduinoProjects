#define l2r A4       // left sensor
#define l1r A3
#define cr A2
#define r1r A1
#define r2r A0  

/*-------definning Outputs------*/
#define LM1 6       // left motor
#define LM2 7       // left motor
#define RM1 3       // right motor
#define RM2 4       // right motor
int k=400;
int d=3000;

void setup()
{
  pinMode(l2r, INPUT);
  pinMode(l1r, INPUT);
  pinMode(cr, INPUT);
  pinMode(r1r, INPUT);
  pinMode(r2r, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
  Serial.begin(9600);
}
void straight(){
  digitalWrite(LM1, LOW);//straight//
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
  }
 void turnleft(){
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
 }
 void turnright(){
  digitalWrite(LM1, LOW);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
 }
 void uturn(){
  turnright();
  turnright();
 }
void inch(){
  digitalWrite(LM1, LOW);//straight//
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
    delay(300);
}
void back(){
      digitalWrite(LM1, LOW);//straight//
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
    delay(300);}
    int vic(int c,int l1,int l2,int r1,int r2){
      inch();
      if(c<k && l1<k &&l2<k &&r1<k&&r2<k){
      return 1;
      }
      else{
      return 0;}
    }
void loop()
{
  int l1=analogRead(l1r);
  int l2=analogRead(l2r);
  int c=analogRead(cr);
  int r2=analogRead(r2r);
  int r1=analogRead(r1r);
  Serial.println(l1);
  Serial.println(l2);
  Serial.println(c);
  Serial.println(r1);
  Serial.println(r2);
  if(c<k && l1>k && l2>k )     // Move Forward
  {
    straight();
  }
 if( l1<k || l2<k){
  delay(1000);
    turnleft();
  }
  if(c>k && l1>k && l2>k &&r1>k && r2>k){
    delay(1000);
    uturn();
  }
  //just reaches the goal state but donot detects it. Robot should be manually removed if it reaches goal
  }
