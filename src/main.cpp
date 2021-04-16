#include <WiFi.h>
#include <WiFiClient.h>

/* Установите здесь свои SSID и пароль */
const char* ssid = "YourNetworkName";  // SSID
const char* password = "YourPassword"; // пароль

void setup() 
{
  Serial.begin(115200);
  delay(100);

  Serial.println("Connecting to ");
  Serial.println(ssid);

  // подключиться к вашей локальной wi-fi сети
  WiFi.begin(ssid, password);

  // проверить, подключился ли wi-fi модуль к wi-fi сети
  while (WiFi.status() != WL_CONNECTED) 
  {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected..!");
  Serial.print("Got IP: ");  Serial.println(WiFi.localIP());


void loop() 
{
  
}

