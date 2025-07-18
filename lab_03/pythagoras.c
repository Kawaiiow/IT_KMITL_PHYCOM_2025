#include <stdio.h>
#include <math.h>

int	main()
{
	float	a, b;

	scanf("%f %f", &a, &b);
	printf("%.2f\n", sqrtf((a * a) + (b * b)));
	return (0);
}
