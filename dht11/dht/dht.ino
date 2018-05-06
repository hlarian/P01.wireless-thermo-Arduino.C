#include <dht.h>

dht DHT;

void setup(){
  Serial.begin(115200);
  delay(10);
}

void loop()
{
  int chk = DHT.read11(7);
 Serial.print("Temp:  ");
 Serial.print(DHT.temperature);
 Serial.print(" C");
 Serial.print("       ");
 Serial.print("humidity:  ");
 Serial.print(DHT.humidity);
 Serial.print(" %");
 Serial.print("X");
// 


   
            
  delay(1000);
}
