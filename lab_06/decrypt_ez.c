#include <ctype.h>
#include <stdio.h>

#ifndef CHARSET
# define CHARSET "ABXYPQRMNCEDKLJOSHTUFVZGWI"
#endif

static int	decode(char c)
{
	int	i;

	i = 0;
	while (CHARSET[i])
	{
		if (c == CHARSET[i])
			return (CHARSET[(i + 31) % 26]);
		else if (toupper(c) == CHARSET[i])
			return (tolower(CHARSET[(i + 31) % 26]));
		i++;
	}
	return (c);
}

int	main()
{
	char	msg[200];
	int		i;

	i = 0;
	scanf("%[^\n]", msg);
	while (msg[i])
	{
		printf("%c", decode(msg[i]));
		i++;
	}
	return (0);
}
