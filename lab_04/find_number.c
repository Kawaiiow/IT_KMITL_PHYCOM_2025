#include <stdio.h>

int	main()
{
	float	w1;
	float	w2;
	float	w3;

	scanf("%f %f %f", &w1, &w2, &w3);
	if ((w1 > w2 && w1 < w3) || (w1 < w2 && w1 > w3))
		printf("%.2f\n", w1);
	else if ((w2 > w1 && w2 < w3) || (w2 < w1 && w1 > w3))
		printf("%.2f\n", w2);
	else if ((w3 > w2 && w3 < w1) || (w3 < w2 && w3 > w1))
		printf("%.2f\n", w3);
	return (0);
}
