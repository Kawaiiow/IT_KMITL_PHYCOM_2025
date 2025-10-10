#include "sys/types.h"
#include <stdio.h>
#include <math.h>

int	main()
{
	unsigned int	src;
	unsigned int	dest;

	scanf("A%u A%u", &src, &dest);
	printf("%d\n", (int)pow(2, dest - src));
	return (0);
}
