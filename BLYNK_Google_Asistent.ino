#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = "WoM4oTTme-Q_5QKKeT92n4lh8GXvHVgC";
char ssid[] = "66";
char pass[] = "11111111";

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}
void loop()
{
  Blynk.run();
}
