#include <stdio.h>
#include <stdlib.h>

double	getValue()
{
	double	n;

	scanf("%lf", &n);
	return (n);
}

double	findMax(double *arr, int n)
{
	double	res;

	res = *arr;
	for (int i = 0; i < n; i++)
	{
		if (*(arr + i) > res)
			res = *(arr + i);
	}
	return (res);
}

double	findMin(double *arr, int n)
{
	double	res;

	res = *arr;
	for (int i = 0; i < n; i++)
	{
		if (*(arr + i) < res)
			res = *(arr + i);
	}
	return (res);
}

double	findAvg(double *arr, int n)
{
	double	sum;

	sum = 0;
	for (int i = 0; i < n; i++)
		sum += *(arr + i);
	return ((double)(sum / n));
}

int	main()
{
	int		n;
	double	*arr;

	scanf("%d", &n);
	arr = malloc(n * sizeof(double));
	if (!arr)
		return (0);
	for (int i = 0; i < n; i++)
		*(arr + i) = getValue();
	printf("%d Values\nMin: %.3lf\nMax: %.3lf\nAvg: %.3lf\n", n, findMin(arr, n), findMax(arr, n), findAvg(arr, n));
	return (0);
}
