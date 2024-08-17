#define in1 2
#define in2 3
#define in3 4
#define in4 6
#define speedr 10
#define speedl 11
#define trig 8
#define echo 7
long duration ,distance ;
void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(speedr, OUTPUT);
  pinMode(speedl, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}
void loop() {
  if (distance < 13){
    back();
    delay(1000);
    left();
    delay(400);
  }
  else {
    forward();
    delay(1000);
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
void back() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
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
  analogWrite(speedr, 0);
  analogWrite(speedl, 0);
}
void ultrasonic() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = duration * 0.0343 / 2;
}