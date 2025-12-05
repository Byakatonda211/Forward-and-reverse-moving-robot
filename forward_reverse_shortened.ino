// Motor control pins
const int L1 = 7, L2 = 6;   // Left motor
const int R1 = 5, R2 = 4;   // Right motor

void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
}

void loop() {
  moveForward();
  delay(1000);

  moveReverse();
  delay(1000);
}

void moveForward() {
  digitalWrite(L1, LOW);  digitalWrite(L2, HIGH);
  digitalWrite(R1, HIGH); digitalWrite(R2, LOW);
}

void moveReverse() {
  digitalWrite(L1, HIGH); digitalWrite(L2, LOW);
  digitalWrite(R1, LOW);  digitalWrite(R2, HIGH);
}
