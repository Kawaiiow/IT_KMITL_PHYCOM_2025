#include <stdio.h>

int	main(void)
{
	char	num[5];

	scanf("%s", num);
	printf("%-80.1s", num);
	printf("%1s%-79.2s", "", num);
	printf("%2s%-78.3s", "", num);
	printf("%3s%-77.4s", "", num);
	printf("%4s%-76.5s", "", num);
	return (0);
}
