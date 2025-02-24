#define BLYNK_TEMPLATE_ID "TMPL3DugsuxEc"
#define BLYNK_TEMPLATE_NAME "led"
#define BLYNK_AUTH_TOKEN "o5L1xOErpyoQU6pv85zE9C6ASNxsEjf8"
#define BLYNK_PRINT Serial
#include<WiFi.h>
#include<BlynkSimpleEsp32.h>

char auth[] = "o5L1xOErpyoQU6pv85zE9C6ASNxsEjf8";
char ssid[] = "OPPO A55";
char pass[] = "swatipr123";

BLYNK_WRITE(V0){
  int pinvalue=param.asInt();
  digitalWrite(42,pinvalue);
}
void setup() {
 Serial.begin(9600);
 pinMode(42,OUTPUT);
 WiFi.begin(ssid,pass);
 while(WiFi.status() != WL_CONNECTED){
  delay(500);
  Serial.println("Not connected");
 }
 Serial.println("Connected");
 Blynk.begin(auth,ssid,pass);

}

void loop() {
  Blynk.run();
}
