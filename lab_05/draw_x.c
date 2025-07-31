#include <stdio.h>

int	main()
{
	int	n;

	n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == n - i - 1 || j == i)
				printf("-");
			else
				printf("#");
		}
		printf("\n");
	}
	return (0);
}
