#include <stdio.h>
#include <math.h>

double	perimeter(double a, double b)
{
	return (sqrt(a * a + b * b) + a + b);
}

double	area(double a, double b)
{
	return (a * b * 0.5);
}

int	main()
{
	double	a;
	double	b;

	scanf("%lf %lf", &a, &b);
	printf("Perimeter: %.2lf\nArea: %.2lf\n", perimeter(a, b), area(a, b));
	return (0);
}
