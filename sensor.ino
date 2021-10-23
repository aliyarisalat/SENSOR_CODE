
const int sensor=3;
const int led=2;

void setup() {
  // put your setup code here, to run once:

  pinMode(sensor,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  int value=digitalRead(sensor);
  Serial.println(value);

  if(value==1)
  {
    digitalWrite(led,HIGH);
    
  }

  else
  {
    digitalWrite(led,LOW);
  }

  delay(1000);

}
