#include <stdio.h>

int	main()
{
	int	n;

	n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i < n)
			printf("%d ", i);
		else
			printf("%d", i);
	}
	return (0);
}

