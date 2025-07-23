#include <stdio.h>

int	main()
{
	float	price;
	float	disc;
	int		n;
	float	b2g1;
	float	perc;

	price = 0;
	disc = 0;
	n = 0;
	scanf("%f %f %d", &price, &disc, &n);
	b2g1 = (price * 2.0) * (n / 3) + (price * (n % 3));
	perc = (price * n) * (1.0 - (disc / 100));
	if (b2g1 < perc)
	{
		printf("Buy 2 Get 1\n%.2f\n", b2g1);
	}
	else
	{
		printf("Discount %.0f%%\n%.2f\n", disc, perc);
	}
	return (0);
}
