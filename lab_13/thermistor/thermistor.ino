#include "Thermistor.hpp"

Thermistor thermite(A0, 5, 10000);

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.println(thermite.getTemperatue());
	delay(500);
}
