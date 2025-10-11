#include <ctype.h>
#include <stdio.h>
#include "string.h"

int	main()
{
	char	buf[450];
	int		c;
	int		w;
	int		l;
	int		i;

	c = 0;
	w = 0;
	l = 0;
	i = 0;
	bzero(buf, 450);
	scanf("%[^.]", buf);
	while (buf[i])
	{
		if (isspace(buf[i]))
			w++;
		if (isalpha(buf[i]))
			c++;
		if (buf[i] == '\n')
			l++;
		i++;
	}
	printf("Char = %d, word = %d, line = %d\n", c, w, l);
}
