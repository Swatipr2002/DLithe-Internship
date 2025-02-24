#include <Ultrasonic.h>

int Touch = 12;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Touch, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Touch == HIGH)
{
  Serial.println("Touch is detected");
}
else
{
  Serial.println("Touch is not detected");
  delay(1000);
}
}

