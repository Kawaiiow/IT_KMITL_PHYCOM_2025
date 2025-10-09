#include "Ultrasonic.hpp"

#define TRIG 4
#define ECHO 2

Ultrasonic ulsensor(TRIG, ECHO);

void setup()
{
	Serial.begin(9600);
	pinMode(TRIG, OUTPUT);
	pinMode(ECHO, INPUT);
}

void loop()
{
	Serial.println(ulsensor.getDistance());
	delay(500);
}
