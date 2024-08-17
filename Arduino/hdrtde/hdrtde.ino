#define pot A5
#define led 9
int reading;
void setup() {
pinMode(led,OUTPUT);
Serial.begin(9600);
}
void loop() {
reading=analogRead(pot);
Serial.println(reading);
delay(250);
  if( reading<400){
  digitalWrite(led,HIGH);
}
else{
  digitalWrite(led,LOW);
}
}