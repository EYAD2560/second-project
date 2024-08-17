#define trig 2
#define echo 4
long dur;
long distance;
void setup() {
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
dur=pulseIn(echo,HIGH);
distance=dur*0.0343/2;
Serial.println(distance);
delay(500);
}
