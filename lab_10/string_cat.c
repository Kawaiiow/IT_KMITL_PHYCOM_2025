#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int	main()
{
	char	*msg;
	int		i = -1;

	msg = calloc(2000, sizeof(char));
	scanf("%[^\n]", msg);
	while (msg[++i])
		msg[i] = tolower(msg[i]);
	i = 0;
	while (strstr(msg + i, "cat"))
	{
		if (!i)
		{
			i = strstr(msg + i, "cat") - msg;
			printf("%d", i);
			i += 3;
		}
		else
		{
			i = strstr(msg + i, "cat") - msg;
			printf(", %d", i);
			i += 3;
		}
	}
	free(msg);
}
