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
#define trig 2
#define echo 4
long dur;
long distance;
void setup() {
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(speedl,OUTPUT);
pinMode(speedr,OUTPUT);
pinMode(irr,INPUT);
pinMode(irl,INPUT);
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);

}

void loop() {
  digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
dur=pulseIn(echo,HIGH);
distance=dur*0.0343/2;
if (distance>20)
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


