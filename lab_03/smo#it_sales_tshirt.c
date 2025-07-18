#include <stdio.h>

int	main()
{
	double	price;
	double	discount;
	int		amount;
	
	scanf("%lf %lf %d", &price, &discount, &amount);
	printf("%.2f\n", (price * (1 - (discount / 100))) * amount);
	return (0);
}
