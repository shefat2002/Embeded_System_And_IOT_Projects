int led = 3;
int ang = 0;

int i =0;

void setup() {
  pinMode(led, OUTPUT);

}

void loop() {
  i = analogRead(ang);
  analogWrite(led, i/4);

}
