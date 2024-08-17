#define in1 10
#define in2 9
#define in3 8
#define in4 7
#define speedl 6
#define speedr 11
#define sensorl 12
#define sensorr 4
int readingr ;
int readingl ;
void setup() {
  pinMode(in1 , OUTPUT) ;
  pinMode(in2 , OUTPUT) ;
  pinMode(in3 , OUTPUT) ;
  pinMode(in4 , OUTPUT) ;
  pinMode(speedl , OUTPUT) ;
  pinMode(speedr , OUTPUT) ;
  pinMode(sensorl , INPUT) ;
  pinMode(sensorr , INPUT) ;
}

void loop() {
linecar();
}


void forward() {
  digitalWrite(in1,HIGH) ;
  digitalWrite(in2,LOW) ;
  digitalWrite(in3,HIGH) ;
  digitalWrite(in4,LOW) ;
  analogWrite(speedl,250) ;
  analogWrite(speedr,250) ;
}
void back() {
  digitalWrite(in1,LOW) ;   
  digitalWrite(in2,HIGH) ;
  digitalWrite(in3,LOW) ;
  digitalWrite(in4,HIGH) ;
  analogWrite(speedl,250) ;
  analogWrite(speedr,250) ;
}
void left() {
  digitalWrite(in1,LOW) ;
  digitalWrite(in2,HIGH) ;
  digitalWrite(in3,HIGH) ;
  digitalWrite(in4,LOW) ;
  analogWrite(speedl,250) ;
  analogWrite(speedr,250) ;
}
void right() {
  digitalWrite(in1,HIGH) ;
  digitalWrite(in2,LOW) ;
  digitalWrite(in3,LOW) ;
  digitalWrite(in4,HIGH) ;
  analogWrite(speedl,250) ;
  analogWrite(speedr,250) ;
}
void stopp() {
  digitalWrite(in1,LOW) ;
  digitalWrite(in2,LOW) ;
  digitalWrite(in3,LOW) ;
  digitalWrite(in4,LOW) ;
  analogWrite(speedl,0) ;
  analogWrite(speedr,0) ;
}



void linecar(){
  readingr = digitalRead(sensorr);
  readingl = digitalRead(sensorl);
  if(readingr == 0 && readingl == 0){
    forward();
  }
  if(readingr == 1 && readingl == 0){
    right();
  }
  if(readingr == 0 && readingl == 1){
    left();
  }
  if(readingr == 1 && readingl == 1){
    stopp();
  }
}

