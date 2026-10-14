int LEDPin=13;
int WaitTimeOn=100;
int WaitTimeoff=900;
void setup() {
  pinMode(LEDPin, OUTPUT);
}
void loop() {
  digitalWrite(13, HIGH);
  delay(WaitTimeOn);
  digitalWrite(13, LOW);
  delay(WaitTimeoff);
}