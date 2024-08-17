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
cc
Serial.println(distance);
delay(500);
}
