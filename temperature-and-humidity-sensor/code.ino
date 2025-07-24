#include <dht.h>

dht DHT;

int sensor_pin = 7;

void setup(){
  Serial.begin(9600);
}

void loop() {
  int chk = DHT.read11(sensor_pin);

  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);

  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);

  delay(4000);
}

