#define in1 8
#define in2 9
#define in3 10
#define in4 11
#define speedl 3
#define speedr 6
#define irr 13
#define irl 12
int reading1;
int reading2;
void setup() {
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(speedl,OUTPUT);
pinMode(speedr,OUTPUT);
pinMode(irr,INPUT);
pinMode(irl,INPUT);


}

void loop() {
  reading1=digitalRead(irr) ;
    reading2=digitalRead(irl) ;
if (reading1==0&&reading2==0){
  forward();
}
else if (reading1==0&&reading2==0){
  right();
}
else if (reading1==1&&reading2==0){
 left ();
}
else {
  stopp();
}
}
void forward() {
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(speedl,130);
  analogWrite(speedr,130);
}
void back() {
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
    analogWrite(speedl,130);
  analogWrite(speedr,130);
}
void right () {
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
      analogWrite(speedl,130);
  analogWrite(speedr,130);
}
void left () {
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
      analogWrite(speedl,130);
  analogWrite(speedr,130);
}
void stopp () {
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
      analogWrite(speedl,0);
  analogWrite(speedr,0);
}


