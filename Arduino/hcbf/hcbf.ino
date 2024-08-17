#define flame 7
#define led 8
int reading;
void setup() {
pinMode(led,OUTPUT);
pinMode(flame,INPUT);
}

void loop() {
  reading=digitalRead(flame);
  if (reading==0){
    digitalWrite(led,HIGH);
  }
else{
digitalWrite(led,LOW);
}
}
