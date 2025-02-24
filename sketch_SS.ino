int ss = A0;
int led = 42;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ss, INPUT);
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int V = analogRead(ss);
  
  if(V>500)
  {
  digitalWrite(led, HIGH);
  Serial.println("led is turn on");
  Serial.println("sensor value is above 500");
  delay(1000);
  }
  else
  {
     digitalWrite(led, LOW);
  Serial.println("led is turn off");
  Serial.println("sensor value is above 500");
  }

}
