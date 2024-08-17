#define in1 6
#define in2 7
#define in3 8
#define in4 9
#define speedr 10
#define speedl 5 
char data;
void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(speedr, OUTPUT);
  pinMode(speedl, OUTPUT);
  Serial.begin(9600);
}
void loop() {
if (Serial.available()>0) {
  data = Serial.read() ;}
}
void forward() {
  digitalWrite(in1, HIGH) ;
  digitalWrite(in2, LOW) ;
  digitalWrite(in3, HIGH) ;
  digitalWrite(in4, LOW) ;
  analogWrite(speedl, 120) ;
  analogWrite(speedr, 120) ;
}
void back() {
  digitalWrite(in1, LOW) ;
  digitalWrite(in2, HIGH) ;
  digitalWrite(in3, LOW) ;
  digitalWrite(in4, HIGH) ;
  analogWrite(speedl, 120) ;
  analogWrite(speedr, 120) ;
}
void left() {
  digitalWrite(in1, LOW) ;
  digitalWrite(in2, HIGH) ;
  digitalWrite(in3, HIGH) ;
  digitalWrite(in4, LOW) ;
  analogWrite(speedl, 120) ;
  analogWrite(speedr, 120) ;
}
void right() {
  digitalWrite(in1, HIGH) ;
  digitalWrite(in2, LOW) ;
  digitalWrite(in3, LOW) ;
  digitalWrite(in4, HIGH) ;
  analogWrite(speedl, 120) ;
  analogWrite(speedr, 120) ;
}
void stopp() {
  digitalWrite(in1, LOW) ;
  digitalWrite(in2, LOW) ;
  digitalWrite(in3, LOW) ;
  digitalWrite(in4, LOW) ;
  analogWrite(speedl, 0) ;
  analogWrite(speedr, 0) ;
}