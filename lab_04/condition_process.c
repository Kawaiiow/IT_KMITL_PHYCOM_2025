#include "complex.h"
#include <stdio.h>

int	main()
{
	int	a;
	int	b;

	scanf("%d %d", &a, &b);
	if (a == b)
		printf("%d + %d = %d\n", a, b, a + b);
	else
		printf("%d - %d = %d\n", a, b, a - b);
	return (0);
}
