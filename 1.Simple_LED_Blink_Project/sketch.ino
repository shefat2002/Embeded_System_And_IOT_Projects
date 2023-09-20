int led1 = 2 , led2 = 3, led3 = 4, led4 = 5, led5 = 6, led6 = 7, led7 = 8 ;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);

}


void loop()
{
  digitalWrite(led1, HIGH);
  delay(300);
  
  digitalWrite(led2, HIGH);
  delay(300);
  
  digitalWrite(led3, HIGH);
  delay(300);

  digitalWrite(led4, HIGH);
  delay(300);
  
  digitalWrite(led5, HIGH);
  delay(300);
  
  digitalWrite(led6, HIGH);
  delay(300);

  digitalWrite(led7, HIGH);
  delay(300);

  digitalWrite(led1, LOW);
  delay(300);
  digitalWrite(led2, LOW);
  delay(300);
  digitalWrite(led3, LOW);
  delay(300);
  digitalWrite(led4, LOW);
  delay(300);
  digitalWrite(led5, LOW);
  delay(300);
  digitalWrite(led6, LOW);
  delay(300);
  digitalWrite(led7, LOW);
  delay(300);
  
}