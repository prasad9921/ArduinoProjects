#define l2r A4       // left sensor
#define l1r A3
#define cr A2
#define r1r A1
#define r2r A0  

/*-------definning Outputs------*/
#define LM1 3       // left motor
#define LM2 4       // left motor
#define RM1 6       // right motor
#define RM2 7       // right motor
int k=500;
int d=3000;
int lg=0;
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
  delay(k);
  turnright();
  delay(k);
 }
void loop() {
  if(lg==0){
  
    straight();
    straight();
    delay(4*k);
    uturn();
    straight();
    delay(3*k);
    turnright();
    delay(k);
    turnleft();
    delay(k);
    straight();
    delay(3*k);
    uturn();
    straight();
    delay(3*k);
    turnleft();
    delay(k);
    straight();
    delay(k);
    turnleft();
    delay(k);
    straight();
    delay(k);
    uturn();
    straight();
    delay(3*k);
    straight();
    delay(3*k);
    lg=1;}
    else{
      
  digitalWrite(LM1, LOW);//straight//
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
    delay(10000);
  
    }
    
  
  
  
  // put your main code here, to run repeatedly:

}
