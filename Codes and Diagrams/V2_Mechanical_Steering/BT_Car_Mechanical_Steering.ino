#define in1 3
#define in2 5
#define in3 6
#define in4 11
#define LEDF 9
#define LEDB 8
#define HORN 7
#define LEDP 4
#include <Servo.h>

Servo myServo;
int command;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(LEDF, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(HORN, OUTPUT);
  pinMode(LEDP, OUTPUT);
  myServo.attach(2);
  myServo.write(80);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();
    Stop();

    switch (command) {
      case 'F': forward(); break;
      case 'B': backward(); break;
      case 'L': left(); break;
      case 'R': right(); break;
      case 'G': forwardLeft(); break;
      case 'I': forwardRight(); break;
      case 'H': backwardLeft(); break;
      case 'J': backwardRight(); break;
      case 'W': frontLedOn(); break;
      case 'w': frontLedOff(); break;
      case 'U': backLedOn(); break;
      case 'u': backLedOff(); break;
      case 'V': hornOn(); break;
      case 'v': hornOff(); break;
      case 'X': parkLedOn(); break;
      case 'x': parkLedOff(); break;
      default: Stop(); break;
    }
  }
}

void forward() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void backward() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}
void left() {
  myServo.write(60);
  delay(500);
  Stop();
}
void right() {
  myServo.write(120);
  delay(500);
  Stop();
}
void forwardLeft() {
  myServo.write(70);
  forward();
  delay(500);
  Stop();
}
void forwardRight() {
  myServo.write(110);
  forward();
  delay(500);
  Stop();
}
void backwardLeft() {
  myServo.write(70);
  backward();
  delay(500);
  Stop();
}
void backwardRight() {
  myServo.write(110);
  backward();
  delay(500);
  Stop();
}
void Stop() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void frontLedOn() {
  digitalWrite(LEDF, HIGH);
}
void frontLedOff() {
  digitalWrite(LEDF, LOW);
}
void backLedOn() {
  digitalWrite(LEDB, HIGH);
}
void backLedOff() {
  digitalWrite(LEDB, LOW);
}
void hornOn() {
  digitalWrite(HORN, HIGH);
}
void hornOff() {
  digitalWrite(HORN, LOW);
}
void parkLedOn() {
  digitalWrite(LEDP, HIGH);
}
void parkLedOff() {
  digitalWrite(LEDP, LOW);
}
