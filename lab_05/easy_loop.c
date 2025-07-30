#include <stdio.h>

int	main()
{
	int	n;
	int	inc;

	scanf("%d", &n);
	inc = n > 0 ? -1 : 1;
	for (; n != 0; n += inc)
		printf("%d ", n);
	printf("0\n");
	return (0);
}

