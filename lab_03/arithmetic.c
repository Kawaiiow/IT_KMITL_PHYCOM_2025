#include <stdio.h>

int main()
{
	double	a, b;

	scanf("%lf,%lf", &a, &b);
	printf("The sum of the given numbers : %lf\nThe difference of the given numbers : %lf\nThe product of the given numbers : %lf\nThe quotient of the given numbers : %lf\n", a + b, a - b, a * b, a / b);
	return (0);
}
