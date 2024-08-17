int led=5;
int pb1=2;
int pb2=3;
int reading1;
int reading2;
int count=0;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(pb1,INPUT);
  pinMode(pb2,INPUT);
}
void loop() {
  reading1=digitalRead(pb1);
reading2=digitalRead(pb2);
if(reading1==1){
  count+=10;
}
if(reading1==1){
  count-=10;
}
count=constrain(count,0,255);
analogWrite(led,count);
}