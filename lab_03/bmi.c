#include <stdio.h>

int	main()
{
	float	height;
	float	weight;

	height = 0;
	weight = 0;
	scanf("%f %f", &height, &weight);
	printf("%f\n", weight / ((height / 100) * (height / 100)));
	return (0);
}
