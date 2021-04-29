#include <WiFi.h>
#include <WiFiClient.h>
#include <Controllers.h>
#include <Constants.h>

void setup() 
{
  Serial.begin(115200);
  delay(100);
  pinMode(LED1pin, OUTPUT);
  pinMode(LED2pin, OUTPUT);

  Serial.println("Connecting to ");
  Serial.println(SSID);

  // подключиться к вашей локальной wi-fi сети
  WiFi.begin(SSID, PASSWORD);

  // проверить, подключился ли wi-fi модуль к wi-fi сети
  while (WiFi.status() != WL_CONNECTED) 
  {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected..!");
  Serial.print("Got IP: ");  Serial.println(WiFi.localIP());
  Serial.print("My MAC: "); Serial.println(WiFi.macAddress());

  initial_controllers();

  server.begin();
  Serial.println("HTTP server started");
}

void loop() 
{
  handle_web_clients();
}