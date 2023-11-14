int ledPin = 13;
int ledPin2 = 14;
int timePot = A0;
int delayVal;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  delayVal = analogRead(timePot);
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, HIGH);
  delay(delayVal);
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW);
  delay(delayVal);
}
