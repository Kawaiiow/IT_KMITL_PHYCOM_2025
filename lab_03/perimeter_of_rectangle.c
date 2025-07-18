#include <stdio.h>

int	main()
{
	double	width;
	double	height;

	scanf("%lf %lf", &width, &height);
	printf("Perimeter of rectangle = %.4lf units\n", (width + height) * 2);
	return (0);
}
