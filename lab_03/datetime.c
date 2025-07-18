#include <stdio.h>

int	main()
{
	long	sec;
	
	sec = 0;
	scanf("%ld", &sec);
	printf("%ld s = %ld d %ld h %ld m %ld s\n", \
			sec, \
			sec / 60 / 60 / 24, \
			(sec / 60 / 60) % 24, \
			(sec / 60) % 60, \
			sec % 60);
	return (0);
}
