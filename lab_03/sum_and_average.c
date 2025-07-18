#include <stdio.h>

int	main()
{
	float	a, b, c, d;

	scanf("%f %f %f %f", &a, &b, &c, &d);
	printf("Summation is %.2f\nAverage is %.3f\n", a + b + c + d, (a + b + c + d) / 4);
	return (0);
}
