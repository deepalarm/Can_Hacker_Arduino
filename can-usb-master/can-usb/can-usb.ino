void setup() 
{
  Serial.begin(9600);
  while(!Serial);
  Serial.println("Hello demon!");

  Serial.begin(9600);
  while(!Serial);
  Serial.println("whats up world?");
}

void loop(){}