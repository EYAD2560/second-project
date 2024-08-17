#define in1 2
#define in2 3
#define in3 4
#define in4 5
#define speedr 10
#define speedl 9
#define sL 8
#define sR 7
int sL1 ;
int sR1 ;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(speedr, OUTPUT);
  pinMode(speedl, OUTPUT);
  pinMode(sL,INPUT) ;
  pinMode(sR,INPUT) ;
}
void loop() {
sL1 = digitalRead(sL) ; 
sR1 = digitalRead(sR) ;
    if (sL1 == 0 && sR1 == 0) {
    forward() ;
  }
  if (sL1 == 1 && sR1 == 0) {
    left() ;
  }
  if (sL1 == 0 && sR1 == 1) {
    right() ;
  }
  if (sL1 == 1 && sR1 == 1) {
    stopp() ;
  }
}
void forward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(speedr, 180);
  analogWrite(speedl, 180);
}
void right() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(speedr, 180);
  analogWrite(speedl, 180);
}
void left() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(speedr, 180);
  analogWrite(speedl, 180);
}
void stopp() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(speedr, 180);
  analogWrite(speedl, 180);
}