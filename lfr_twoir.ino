//int S_A = 10;  //speed motor a
int M_A1 = 13; //motor a = +
int M_A2 = 12; //motor a = -
int M_B1 = 11; //motor b = -
int M_B2 = 10; //motor b = +
//int S_B = 9;  //speed motor b

int R_S = A0; //sincer R
//int S_S = A1; //sincer S
int L_S = A2; //sincer L

void setup() 
{
pinMode(M_B1, OUTPUT);
pinMode(M_B2, OUTPUT);
pinMode(M_A1, OUTPUT);
pinMode(M_A2, OUTPUT);
/*pinMode(S_B, OUTPUT);
pinMode(S_A, OUTPUT);*/

pinMode(L_S, INPUT);
//pinMode(S_S, INPUT);
pinMode(R_S, INPUT);

/*analogWrite(S_A, 150); 
analogWrite(S_B, 150); 
delay(200);*/
}
void loop()
{  
if((digitalRead(L_S) == 0) && (digitalRead(R_S) == 0)){
  //Serial.println("forward");
  forword();}
if((digitalRead(L_S) == 0) && (digitalRead(R_S) == 1)) {
  //Serial.println("Right");
  turnRight();}

if((digitalRead(L_S) == 1) && (digitalRead(R_S) == 0)) {turnLeft();}

if((digitalRead(L_S) == 1) && (digitalRead(R_S) == 1)) {Stop();}

//if((digitalRead(L_S) == 1) && (digitalRead(S_S) == 1)&& (digitalRead(R_S) == 0)) {turnLeft();
//Serial.println("Left");}
//if((digitalRead(L_S) == 1) && (digitalRead(S_S) == 1)&& (digitalRead(R_S) == 1)) {
  //Serial.println("Left");
  //turnLeft();}

//if((digitalRead(L_S) == 0) && (digitalRead(S_S) == 0)&& (digitalRead(R_S) == 0)) {
  //Serial.println("Left");
  //turnBack();}
//if((digitalRead(L_S) == 1) && (digitalRead(S_S) == 0)&& (digitalRead(R_S) == 1)) {
  //Serial.println("Left");
  //turnLeft();}
}

void forword(){
digitalWrite(M_A1, LOW);
digitalWrite(M_A2, HIGH);
digitalWrite(M_B1, LOW);
digitalWrite(M_B2, HIGH);  
}


void turnRight(){
digitalWrite(M_A1, HIGH);
digitalWrite(M_A2, LOW);
digitalWrite(M_B1, LOW);
digitalWrite(M_B2, LOW);  
}

void turnLeft(){
digitalWrite(M_A1, LOW);
digitalWrite(M_A2, HIGH);
digitalWrite(M_B1, LOW);
digitalWrite(M_B2, LOW);
}

//void turnBack(){
// digitalWrite(M_A1, LOW);
// digitalWrite(M_A2, HIGH);
// digitalWrite(M_B1, HIGH);
// digitalWrite(M_B2, LOW);
//}

void Stop(){
digitalWrite(M_A1, LOW);
digitalWrite(M_A2, LOW);
digitalWrite(M_B1, LOW);
digitalWrite(M_B2, LOW);
}
