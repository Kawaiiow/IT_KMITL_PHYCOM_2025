#include <stdio.h>

int	main()
{
	int	a;
	int	b;
	int	c;
	
	a = 0;
	b = 0;
	c = 0;
	scanf("%d %d %d", &a, &b, &c);
	a + b > c && a + c > b && b + c > a ? printf("Triangle is valid.\n") : printf("Triangle is not valid.\n");
	return (0);
}
