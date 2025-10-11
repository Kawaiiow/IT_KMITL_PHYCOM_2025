#include "strings.h"
#include <stdio.h>

int	main()
{
	char	tmp[200];
	char	*buf;

	bzero(tmp, 200);
	scanf("%[^\n]", tmp);
	for (int i = 1; i <= 127; i++)
	{
		buf = tmp;
		while (*buf)
		{
			if (*buf == i)
				printf("%c", *buf);
			buf++;
		}
	}
}
