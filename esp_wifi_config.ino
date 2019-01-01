#include "ESP8266WiFi.h"

// WiFi parameters to be configured
const char* ssid = "NetMASTER Uydunet-40B0";
const char* password = "f347fc7d";

void setup(void)
{ 
  Serial.begin(9600);
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
     delay(500);
     Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println(WiFi.localIP());

}
void loop() {
  // Nothing
}
