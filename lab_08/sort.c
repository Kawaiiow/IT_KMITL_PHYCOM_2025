#include <stdio.h>

void	sort_list(float *list, int size)
{
	float		tmp;
	int		i;
	int		t;

	t = 0;
	while (t < size - 1)
	{
		i = 0;
		while (i < (size - 1) - t)
		{
			if (list[i] > list[i + 1])
			{
				tmp = list[i + 1];
				list[i + 1] = list[i];
				list[i] = tmp;
			}
			i++;
		}
		t++;
	}
}

int	main()
{
	int n;

	scanf("%d", &n);
	float	arr[n];
	for (int i = 0; i < n; i++)
	{
		scanf(" %f", arr + i);
	}
	sort_list(arr, n);
	for (int i = 0; i < n; i++)
		printf("%.2f ", *(arr + i));
	return (0);
}
