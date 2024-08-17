int pot=A5;
int reading;
int britness;
int led=9;
void setup() {
  Serial.begin(9600);
}
void loop() {
  reading=analogRead(pot);
  Serial.println(reading);
  britness=map(reading,0,1023,0,255);
analogWrite(led,britness);
}