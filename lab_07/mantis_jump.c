#include <stdio.h>

int	checker(int cur, int n, int total)
{
	if (cur == n)
		return (total + 1);
	if (cur > n)
		return total;
	total = checker(cur + 1, n, total);
	total = checker(cur + 2, n, total);
	return (total);
}

int	main()
{
	int	n;

	scanf("%d", &n);
	printf("method = %d", checker(0, n, 0));
	return (0);
}
