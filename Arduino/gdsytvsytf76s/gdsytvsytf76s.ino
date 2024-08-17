#define in1 8
#define in2 9
#define in3 10
#define in4 11
#define speedl 3
#define speedr 6
#define irr 13
#define irl 12

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
if (irr==0&&irl==0){
  forward();
}
else if (irr==0&&irl==1){
righ();
}
else if (irr==1&&irl==0){
left();
}
else if (irr==1&&irl==0){
stopp();
}
}
void forward() {
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(speedl,100);
  analogWrite(speedr,100);
}
void back() {
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
    analogWrite(speedl,100);
  analogWrite(speedr,100);
}
void righ () {
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
      analogWrite(speedl,100);
  analogWrite(speedr,100);
}
void left () {
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
      analogWrite(speedl,100);
  analogWrite(speedr,100);
}
void stopp () {
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
      analogWrite(speedl,0);
  analogWrite(speedr,0);
}


