#include <stdio.h>

#ifndef PI
# define PI 3.14159265359
#endif

int	main()
{
	double	price;
	double	diameter;
	double	height;

	scanf("%lf %lf %lf", &price, &diameter, &height);
	printf("Volume : %.2lfml\nBaht/ml : %.4lf\n", \
		height * PI * (diameter / 2) * (diameter / 2), \
		price / (height * PI * (diameter / 2) * (diameter / 2)));
	return (0);
}
