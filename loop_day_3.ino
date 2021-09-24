void setup() {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}



void loop() {
  for (int i = 12; i >= 9; i--)
  {
    digitalWrite(i, 1);
    delay(500);
    digitalWrite(i, 0);
  }
}
