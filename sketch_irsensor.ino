int IR = 12;
int V;
int led = 42;
int Buzzer = 6;
void setup() {
  // put your setup code here, to run once:
  
  pinMode(12, INPUT);
  pinMode(42, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int V = digitalRead(IR);
  if(V == HIGH)
  {
    Serial.println("object is detected");
    digitalWrite(42, HIGH);
    
    Serial.println("led is turn on");

  }
  else
  {
    Serial.println("object is not detected");
    digitalWrite(6, HIGH);
   
    Serial.println("Buzzer is turn on");

  }

}
