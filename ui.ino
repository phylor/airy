int storagePin = 3;
int shiftPin = 4;
int dataPin = 2;

int display1Pin = 8;
int display2Pin = 9;

void setup() {
  pinMode(storagePin, OUTPUT);
  pinMode(shiftPin, OUTPUT);
  pinMode(dataPin, OUTPUT);

  pinMode(display1Pin, OUTPUT);
}

void loop() {
  digitalWrite(display1Pin, LOW);
  digitalWrite(display2Pin, LOW);
  
  // 1st display
  digitalWrite(storagePin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0B01100000);
  digitalWrite(storagePin, HIGH);
  
  digitalWrite(display1Pin, HIGH);
  digitalWrite(display2Pin, LOW);

  digitalWrite(display1Pin, LOW);
  digitalWrite(display2Pin, LOW);

  // 2nd display
  digitalWrite(storagePin, LOW);
  shiftOut(dataPin, shiftPin, LSBFIRST, 0B11001101);

  digitalWrite(storagePin, HIGH);
  digitalWrite(display1Pin, LOW);
  digitalWrite(display2Pin, HIGH);
}
