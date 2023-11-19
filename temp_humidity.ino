#include <Adafruit_AHT10.h>

Adafruit_AHT10 aht;

void setup() {
  Serial.begin(9600);
  Serial.println("Sensor de Humidade e Temperatura!");

  if (!aht.begin()){
    Serial.println("Modulo AHT10 não encontrado. Verifique a fiação");
    while(1) delay(10); 
  };
  Serial.println("Módulo AHT10 encontrado");
}

void loop() {
  sensors_event_t humidity, temp;
  aht.getEvent(&humidity, &temp);
  Serial.print("Temperatura: "); 
  Serial.print(temp.temperature);
  
  Serial.println(" graus celsius");
  Serial.print("Humidade: "); 
  Serial.print(humidity.relative_humidity); 
  Serial.println("% rH");

  delay(500);

}
