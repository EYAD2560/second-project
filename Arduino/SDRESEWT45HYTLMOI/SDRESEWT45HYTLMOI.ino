int reading;
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
Serial.begin(9600);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
}

void loop() {
reading=analogRead(A0);
Serial.println(reading);
if (reading<250){
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
digitalWrite(8,LOW);
}
else if (reading>250 && reading<600){
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
digitalWrite(8,LOW);
}
else if (reading>600 && reading<800){
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(8,HIGH);}

}
