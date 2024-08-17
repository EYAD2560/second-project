int reading;
void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
}

void loop() {
if(Serial.available()>0){
  reading=Serial.read();
if (reading='F'){
  digitalWrite(8,HIGH);
}
else {
  digitalWrite(8,LOW);
}
}