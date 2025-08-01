// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  if (analogRead(A0) <= 100) {
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(3, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}