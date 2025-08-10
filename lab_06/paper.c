#include "sys/types.h"
#include <stdio.h>
#include <math.h>

int	main()
{
	uint	src;
	uint	dest;

	scanf("A%u A%u", &src, &dest);
	printf("%d\n", (int)pow(2, dest - src));
	return (0);
}
