#include <stdio.h>

int	main()
{
	float	n[3];
	float	tmp;
	int		i;
	int		t;

	scanf("%f %f %f", n, n + 1, n + 2);
	t = 0;
	while (t <= 3 - 1)
	{
		i = 0;
		while (i < (3 - 1) - t)
		{
			if (n[i] > n[i + 1])
			{
				tmp = n[i];
				n[i] = n[i + 1];
				n[i +1] = tmp;
			}
			i++;
		}
		t++;
	}
	printf("%.2f\n", n[1]);
	return (0);
}
