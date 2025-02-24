int relay = 5;
int IR = 12;
int V;
void setup() {
  // put your setup code here, to run once:
pinMode(5, OUTPUT);
pinMode(12, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int V = digitalRead(IR);
  if(V == HIGH)
  {
  digitalWrite(5, HIGH);
  Serial.println("turn on motor");
  Serial.println("object is detected");
  delay(5000);
  }
  else
  {
  digitalWrite(5, LOW);
  Serial.println("turn off motor");
  Serial.println("object is not detected");
  delay(5000);
  }

}
