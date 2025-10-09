#ifndef TEMPERATURE_HPP
# define TEMPERATURE_HPP

# include <Arduino.h>

class Temperature
{

	private:

		unsigned int	inputPin;

	public:

		Temperature(unsigned int inputPin);
		Temperature(const Temperature& obj);
		~Temperature();

		double	getTemperature() const;

		void	setInputPin(unsigned int inputPin);

};

#endif
