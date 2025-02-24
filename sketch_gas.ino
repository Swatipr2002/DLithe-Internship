int flame = A0;
int buzzer = 35;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(flame, INPUT);
pinMode(buzzer, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int V = analogRead(flame);
Serial.println(V);
if(V<500)
{
digitalWrite(buzzer, HIGH);
Serial.println("buzzer is turn on");
}
else
{
digitalWrite(buzzer, LOW);
Serial.println("buzzer is turn off");
}
delay(1000);
}
