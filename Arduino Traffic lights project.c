int redpinLED=9;
int yellowpinLED=11;
int greenpinLED=10;
int redtimeoff=300;
int redtimeon=2000;
int yellowtimeoff=300;
int yellowtimeon=200;
int greentimeoff=600; 
int greentimeon=4500; 
void setup() {
  pinMode(redpinLED,OUTPUT);
  pinMode(yellowpinLED,OUTPUT);
  pinMode(greenpinLED,OUTPUT);
}

void loop() {
digitalWrite(redpinLED, HIGH);
delay(redtimeon);
digitalWrite(redpinLED, LOW);
delay(redtimeoff);

digitalWrite(yellowpinLED, HIGH);
delay(yellowtimeon);
digitalWrite(yellowpinLED, LOW);
delay(yellowtimeoff);

digitalWrite(greenpinLED, HIGH);
delay(greentimeon);
digitalWrite(greenpinLED, LOW);
delay(greentimeoff);

}

