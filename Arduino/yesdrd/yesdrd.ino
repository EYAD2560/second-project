
int led = 3;
int button=4;
int reading;
int count = 0 ;
void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
reading=digitalRead(button);
if(reading==HIGH){
count += 10;
delay(250);
}
analogWrite(led,count);
}