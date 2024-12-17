#define in1 3
#define in2 5
#define in3 6
#define in4 11
#define LEDF 9
#define LEDB 8
#define HORN 7
#define LEDP 4

int command;
int Speed = 204;  // 0 - 255.
unsigned long lastCommandTime = 0;
const unsigned long timeoutDuration = 250;  // Timeout duration in milliseconds

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(LEDF, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(HORN, OUTPUT);
  pinMode(LEDP, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();
    Stop();  // Initialize with motors stopped.

    lastCommandTime = millis();

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

  if (millis() - lastCommandTime > timeoutDuration) {
    Stop();
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
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void right() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}
void forwardLeft() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
void forwardRight() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void backwardLeft() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}
void backwardRight() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
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
