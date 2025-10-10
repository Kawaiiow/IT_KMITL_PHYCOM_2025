#include <stdio.h>
#include <math.h>

int	main()
{
	double	x;
	double	y;

	scanf("%lf %lf", &x, &y);
	printf("sqrt(%.0lf^2+%.0lf^2)=%.2lf", x, y, sqrt(x * x + y * y));
}
