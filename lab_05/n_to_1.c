#include <stdio.h>

int	main()
{
	int	n;

	n = 0;
	scanf("%d", &n);
	do
		printf(n > 1 ? "%d " : "%d", n);
	while (n-- > 1);
	return (0);
}

