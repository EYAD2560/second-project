#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 49  
#define DHTTYPE DHT11  

LiquidCrystal_I2C lcd(0x27, 16, 2);
DHT dht(DHTPIN, DHTTYPE);

#include <Servo.h>
#include <Keypad.h>

Servo myservo;
int pos = 0;

const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {14, 15, 16, 17};
byte colPins[COLS] = {18, 19, 20, 21};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

#define buzzer 25
#define led 23
#define gas A1
#define flame A7
#define trig 30
#define echo 32
#define rain A0

int gas_reading, flame_reading, rain_reading;
float temperature , humidity;
long distance;
long duration;
const String password = "1234";
String inputPassword = "";

void setup() {
  lcd.begin(16, 2);
  lcd.backlight();
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(gas, INPUT);
  pinMode(flame, INPUT);
  pinMode(trig, OUTPUT);                   
  pinMode(echo, INPUT);
  pinMode(rain, INPUT);
  myservo.attach(10);
  dht.begin();
}

void loop() {
  gas_reading = digitalRead(gas);
  flame_reading = digitalRead(flame);
  rain_reading = digitalRead(rain);
  char key = keypad.getKey();
  temperature = dht.readTemperature();
  humidity = dht.readHumidity();

  if (gas_reading == 0) {
    digitalWrite(buzzer, HIGH);
  }
  else if (gas_reading == 1) {
    digitalWrite(buzzer, LOW);
  }

  if (flame_reading == 0) {
    digitalWrite(buzzer, HIGH);
  }
  else if (flame_reading == 1) {
    digitalWrite(buzzer, LOW);
  }

  ultrasonic();

  if (distance < 30) {
    digitalWrite(buzzer, HIGH);
  }
  else if (distance > 30) {
    digitalWrite(buzzer, LOW);
  }

  if (rain_reading == 0) {
    digitalWrite(led, HIGH);
  }
  else if (rain_reading == 1) {
    digitalWrite(led, LOW);
  }

  if (key) {
    Serial.println(key);
    if (key == '#') {
      if (inputPassword == password) {
        myservo.write(160);
      } else {
        myservo.write(30);
      }
      inputPassword = "";
    } else if (key == '*') {
      inputPassword = "";
    } else {
      inputPassword += key;
    }
  }


  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature); 
  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(humidity);
  lcd.print("%");

  delay(2000); 
}

void ultrasonic() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duration = pulseIn(echo, HIGH);
  distance = duration * 0.0343 / 2;
}
