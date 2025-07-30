#include <stdio.h>

int	main()
{
	int	m;
	int	n;
	int	inc;

	scanf("%d %d", &m, &n);
	inc = 1;
	if (m > n)
		inc = -1;
	while (m != n)
	{
		printf("%d ", m);
		m += inc;
	}
	printf("%d", n);
	return(0);
}

