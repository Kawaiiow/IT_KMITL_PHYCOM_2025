#include <stdio.h>

int	main()
{
	int	n;

	n = 0;
	scanf("%d", &n);
	for (int i = 0; n - i > 0; i++)
	{
		if (n - i > 1)
			printf("%d ", n - i);
		else
			printf("%d", n - i);
	}
	return (0);
}

