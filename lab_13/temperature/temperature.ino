#include "Temperature.hpp"

Temperature tempSensor01(A0);

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.println(tempSensor01.getTemperature());
	delay(500);
}
