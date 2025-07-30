#include <stdio.h>

int	main()
{
	int	i;
	int	n;

	i = 0;
	scanf("%d", &n);
	while (++i <= n)
		printf(i == n ? "%d" : "%d ", i);
	return (0);
}

