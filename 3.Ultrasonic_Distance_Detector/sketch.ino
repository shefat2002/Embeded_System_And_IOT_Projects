int trig =3;
int echo =2;
int led1 = 5, led2=6,led3=7,led4=8;
int duration;
float distance;


void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  duration = pulseIn(echo, HIGH);

  distance = duration * 0.034 / 2;

  Serial.println(distance);

  delay(200);
  if(distance < 10){
  digitalWrite(led1, HIGH);
  }else{
    digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);


  }
  if(distance < 50){
    digitalWrite(led2, HIGH);
  }else{
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led1, LOW);

  }
  if(distance < 200){
    digitalWrite(led3, HIGH);
  }else{
    digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led1, LOW);
  }


  if(distance  < 400){
    digitalWrite(led4, HIGH);
  }else{
    digitalWrite(led4, LOW);
  }

}
