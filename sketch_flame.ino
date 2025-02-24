int laser = A0;
int IR = 12;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(IR, INPUT);
pinMode(laser, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int V = digitalRead(IR);
Serial.println(V);
if(V = HIGH)
{
analogWrite(laser, HIGH);
Serial.println("laser is turn on");
Serial.println("object is detected");
}
else
{
analogWrite(laser, LOW);
Serial.println("laser is turn off");
Serial.println("object is not detected")
}
delay(1000);
}
