#include <Bridge.h>
#include <BridgeClient.h>
#include <DHT.h>

#include <SPI.h>
#include <WiFiNINA.h>

//http://10.5.5.9/gp/gpControl/info
//http://10.5.5.9/gp/gpControl/status

BridgeClient client;
const int status = WL_IDLE_STATUS;
const char ssid[] = "Frequence_2.4";
const char pass[] = "Ja59hQafeTQHrh"; 
const char* host = "10.5.5.9";
const int httpPort = 80;


void setup(){
  //Bridge.begin();
  Serial.begin(9600);
  while (!Serial);
  test_conn("gopro4hero", "12345678");

  StartPin();
  delay(5000);
  FinishPin();
  
}

void loop(){

}

void test_conn(char ssid[], char pass[])
{  
  int status = WL_IDLE_STATUS;
  while (status != WL_CONNECTED)
  {
    Serial.print("Connecting to ");
    Serial.println(ssid);
    status = WiFi.begin(ssid, pass);
    delay(5000);
  }

  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void StartPin(){
  Serial.print("connecting to ");
  Serial.println(host);

  if (!client.connect("10.5.5.9", httpPort)) {
    Serial.println("connection failed");
    return;
  }
  
  String StartUrl = "/gpPair?c=start&pin=XXXX&mode=0";
  Serial.print("Requesting URL: ");
  Serial.println(StartUrl);
  client.print(String("GET ") + StartUrl + " HTTP/1.1\r\n" +
  "Host: " + host + "\r\n" +
  "Connection: close\r\n\r\n");
  Serial.println("Started");
}

void FinishPin(){
  Serial.print("connecting to ");
  Serial.println(host);
  
  if (!client.connect("10.5.5.9", httpPort)) {
    Serial.println("connection failed");
    return;
  }
  
  String StopUrl = "10.5.5.9/gpPair?c=finish&pin=XXXX&mode=0";
  Serial.print("Requesting URL: ");
  Serial.println(StopUrl);
  client.print(String("GET ") + StopUrl + " HTTP/1.1\r\n" +
  "Host: " + host + "\r\n" +
  "Connection: close\r\n\r\n");
  Serial.println("Finished");
}
