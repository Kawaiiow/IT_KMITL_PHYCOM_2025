#include <stdio.h>

#ifndef MI_KM
# define MI_KM 1.60934
#endif

int	main()
{
	double	mph;

	mph = 0;
	scanf("%lf", &mph);
	printf("%.2lf\n", mph * MI_KM);
	return (0);
}