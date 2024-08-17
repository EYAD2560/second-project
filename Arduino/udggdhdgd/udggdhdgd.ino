int in1=2;
int in2=3;
int in3=4;
int in4=5;
int speed1=9;
int speed2=10;
char reading;
int irr=7;
int irl=6;
int reading1;
int reading2;
void setup() {
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
Serial.begin(9600);

}

void loop() {
if (Serial.avalable()>0){
reading=Serial.read();
if (reading=='F'){
forward();
}
  
else if (reading=='B'){
back();
}
else if (reading=='R'){
right();
}
else if (reading=='L'){
left();
}
else{
  stopp();
}
if (reading=='G'){
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
else if (reading1==0&&reading2==1){
 right ();
}
else if (reading1==0&&reading2==1){
 stopp ();
}
}
}
void forward(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(speed1,110);
  analogWrite(speed2,110);
}
void back(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  analogWrite(speed1,110);
  analogWrite(speed2,110);
}
void right(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(speed1,110);
  analogWrite(speed2,110);
}
void left(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  analogWrite(speed1,110);
  analogWrite(speed2,110);
}
void stopp(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  analogWrite(speed1,110);
  analogWrite(speed2,110);
}