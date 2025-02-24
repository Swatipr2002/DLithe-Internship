int soilsensor = A0;
int buzzer = 6;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(soilsensor, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int V = analogRead(soilsensor);
  Serial.print(V);
  if(V>500)
  {
    Serial.print("soilsensor value is:");
    Serial.println(V);
    digitalWrite(buzzer, HIGH);
    Serial.println("buzzer is turn on");
  }
  else
  {
    Serial.print("soilsensor value is:");
    Serial.println(V);
    digitalWrite(buzzer, LOW);
    Serial.println("buzzer is turn off"); 
  }

}
