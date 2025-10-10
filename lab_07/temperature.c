#include <ctype.h>
#include <stdio.h>

double	celsiusToFahrenheit(double celsius)
{
	return (32.0 + celsius * (180.0 / 100.0));
}

double	fahrenheitToCelsius(double fahrenheit)
{
	return ((fahrenheit - 32) * 100.0 / 180.0);
}

void	printFarenheit(double fahrenheit)
{
	printf("%.2lf f\n", fahrenheit);
}

void	printCelsius(double celsius)
{
	printf("%.2lf c\n", celsius);
}

int	main()
{
	double	temp;
	char	format;

	scanf("%lf %c", &temp, &format);
	format = tolower(format);
	if (format == 'c')
		printFarenheit(celsiusToFahrenheit(temp));
	else if (format == 'f')
		printCelsius(fahrenheitToCelsius(temp));
}
