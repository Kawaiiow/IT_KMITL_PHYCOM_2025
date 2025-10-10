#include <stdio.h>
#include <math.h>

# define PI 3.141592653589793

int	main()
{
	double	ang;
	double	u;

	scanf("%lf %lf", &ang, &u);
	printf("theta (degree) : %.0lf\nu (m/s) : %.0lf\nh (m) : %.4lf", ang, u, ((u * u) * (sin((ang * PI) / 180) * sin((ang * PI) / 180)) / (2 * 9.81)));
	return (0);
}
