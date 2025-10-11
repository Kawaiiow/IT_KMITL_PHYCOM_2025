#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	char	*buffer;
	char	tofind;
	int		n;

	n = 0;
	buffer = calloc(150, sizeof(char));
	scanf("%c %[^\n]", &tofind, buffer);
	while (*buffer)
	{
		if (tolower(*buffer) == tolower(tofind))
			n++;
		buffer++;
	}
	printf("%d\n", n);
}
