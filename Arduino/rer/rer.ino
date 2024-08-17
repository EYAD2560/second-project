# define in1 8
# define in2 9
# define in3 10
# define in4 11
# define buzzer 13
int gas=12 ;
int reading ;
char rx_tx ;
void setup() {
Serial.begin(9600);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(gas,INPUT);

}

void loop() {
if (Serial.available() > 0 ){
  rx_tx=Serial.read();
reading=digitalRead(gas);
if (reading==0){
  digitalWrite(buzzer,HIGH);
  forward();
}
if (reading==1){
  digitalWrite(buzzer,HIGH);
  stopp();
}
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

  