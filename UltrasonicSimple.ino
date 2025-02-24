#include <Ultrasonic.h>
Ultrasonic ultrasonic(12, 13);
int distance;
int led = 42;
int buzzer = 6;
int relay = 5;

void setup() {
  Serial.begin(9600);
  pinMode(42,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  // Pass INC as a parameter to get the distance in inches
  distance = ultrasonic.read();
  if(distance<5)
  {
    digitalWrite(42, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
  Serial.print("Distance in CM: ");
  Serial.println(distance);
  delay(1000);
}
else
{
   digitalWrite(42, LOW);
   digitalWrite(6, HIGH);
   digitalWrite(5, HIGH);
  Serial.print("Distance in CM: ");
  Serial.println(distance);
  delay(1000);
}

}