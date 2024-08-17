# define in1 2 
# define in2 3
# define in3 4
# define in4 5
char rx_tx ;
void setup() {
Serial.begin(9600);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
}

void loop() {
if (Serial.available() > 0 ){
  rx_tx=Serial.read();
}
if (rx_tx =='F'){
forward();
}
else if(rx_tx =='B'){
back();
}
else if(rx_tx =='R'){
right();
}
else if(rx_tx =='L'){
left();
}
  else if(rx_tx =='S'){
stopp();
}
  
  }
void forward(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
void back(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
  void right(){
    digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,HIGH);
  }
 
    void left(){
    digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  }

 void stopp(){
    digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  }

  