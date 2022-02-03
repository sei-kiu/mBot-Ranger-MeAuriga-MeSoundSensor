#include <Arduino.h>
#include <MeAuriga.h>

MeSoundSensor soundsensor(14);

void setup()
{
  // put your setup code here, to run once:

  Serial.begin(115200);

}

void loop()
{
  // put your main code here, to run repeatedly:

  Serial.println(soundsensor.strength());

  delay(200);
}
