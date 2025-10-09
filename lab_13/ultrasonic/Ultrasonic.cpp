#include "Ultrasonic.hpp"

Ultrasonic::Ultrasonic(const unsigned int trigPin, const unsigned int echoPin): trigPin(trigPin), echoPin(echoPin)
{
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
	this->distance = 0;
}

Ultrasonic::Ultrasonic(const Ultrasonic& obj): trigPin(obj.trigPin), echoPin(obj.echoPin)
{
	pinMode(obj.trigPin, OUTPUT);
	pinMode(obj.echoPin, INPUT);
	this->distance = 0;
}

Ultrasonic::~Ultrasonic()
{
}

long	Ultrasonic::getDistance() const
{
	long start;
	int	pulseWidth;

	start = micros();
	digitalWrite(this->trigPin, HIGH);
	while (micros() - start < 10);
	digitalWrite(this->trigPin, LOW);
	pulseWidth = pulseIn(this->echoPin, HIGH);
	return (pulseWidth / 29 / 2);
}

void	Ultrasonic::setEcho(unsigned int echoPin)
{
	this->echoPin = echoPin;
}

void	Ultrasonic::setTrig(unsigned int trigPin)
{
	this->trigPin = trigPin;
}
