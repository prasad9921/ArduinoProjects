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
int k=150;
int d=3000;
int lg=0;
void setup() {
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
  // put your setup code here, to run once:

}
void straight(){
  digitalWrite(LM1, LOW);//straight//
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
    
  }
  void turnleft(){
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, HIGH);
    
 }
  void turnright(){
  digitalWrite(LM1, LOW);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
    
 }
 void uturn(){
  turnright();
  delay(4.4*k);
  turnright();
  delay(4.2*k);
 }
void shortPath(){
 int shortDone=0;
  if(path[pathLength-3]=='L' && path[pathLength-1]=='R'){
    pathLength-=3;
    path[pathLength]='B';
    Serial.println("test1");
    shortDone=1;
  }
   
  if(path[pathLength-3]=='L' && path[pathLength-1]=='S' && shortDone==0){
    pathLength-=3;
    path[pathLength]='R';
    Serial.println("test2");
    shortDone=1;
  }
   
  if(path[pathLength-3]=='R' && path[pathLength-1]=='L' && shortDone==0){
    pathLength-=3;
    path[pathLength]='B';
    Serial.println("test3");
    shortDone=1;
  }
  
   
  if(path[pathLength-3]=='S' && path[pathLength-1]=='L' && shortDone==0){
    pathLength-=3;
    path[pathLength]='R';
    Serial.println("test4");
    shortDone=1;
  }
     
  if(path[pathLength-3]=='S' && path[pathLength-1]=='S' && shortDone==0){
    pathLength-=3;
    path[pathLength]='B';
    Serial.println("test5");
    shortDone=1;
  }
    if(path[pathLength-3]=='L' && path[pathLength-1]=='L' && shortDone==0){
    pathLength-=3;
    path[pathLength]='S';
    Serial.println("test6");
    shortDone=1;
  }
  
  path[pathLength+1]='D';
  path[pathLength+2]='D';
  pathLength++;
  Serial.print("Path length: ");
  Serial.println(pathLength);
  printPath();
}

void loop() {
  digitalWrite(LM1, LOW);
   digitalWrite(LM2, HIGH);
   delay(50);
  straight();
  delay(1000);
  straight();
  delay(800);
  turnright();
  delay(4.4*k);
  straight();
  delay(700);
  turnright();
  delay(5.4*k);
  digitalWrite(LM1, LOW);
  digitalWrite(LM2, HIGH);
  delay(60);
  straight();
  delay(500);
  digitalWrite(LM1, LOW);//straight//
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
  delay(200000);
  // put your main code here, to run repeatedly:

}
