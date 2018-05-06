#include <ESP8266WiFi.h>

const char* ssid = "skynet";
const char* password = "yda32+101110001";

// Create an instance of the server
// specify the port to listen on (first argument)
WiFiServer server(8080);  

void setup() {
  Serial.begin(115200);
  delay(10);
  
  // Connect to WiFi network
  WiFi.begin(ssid, password);   
  // Start the server
  server.begin();
  
  Serial.print(WiFi.localIP());
}

void loop() {
  // Check if a client has connected
  WiFiClient client = server.available();

  // Wait until the client sends some data
    if(!client){
    delay(1);
  }   
  
   String temp=Serial.readStringUntil('X');    
   client.println(temp);
  
  delay(200);
}

