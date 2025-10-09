#include "Temperature.hpp"

/**
 * ## Temperature Class Constructor
 * Default for setup Temperature.
 * @param inputPin Set pin to read voltage from sensor.
 */
Temperature::Temperature(unsigned int inputPin): inputPin(inputPin)
{
	pinMode(inputPin, INPUT);
}

/**
 * ## Temperature Class Constructor
 * Default for setup Temperature.
 * @param ojb Set pin to read voltage from sensor.
 */
Temperature::Temperature(const Temperature& obj): inputPin(obj.inputPin)
{
	pinMode(obj.inputPin, INPUT);
}

Temperature::~Temperature()
{
}

/**
 * get temperature in Celsius.
 * @return temperature in Celsius in double.
 */
double	Temperature::getTemperature() const
{
	return (((analogRead(inputPin) * 5.0 / 1023) - 0.5 ) / 0.01 );
}

void	Temperature::setInputPin(unsigned int inputPin)
{
	this->inputPin = inputPin;
	pinMode(inputPin, INPUT);
}
