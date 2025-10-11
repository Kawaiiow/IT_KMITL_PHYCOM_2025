#include <stdio.h>
#include "string.h"
#include "strings.h"

int	main()
{
	char	msg[100];
	char	buf[100];
	char	buf2[100];
	int		i;
	int		j;
	int		rep;
	
	i = 0;
	j = 0;
	rep = 1;
	bzero(buf, 100);
	bzero(buf2, 100);
	scanf("%[^\n]", msg);
	strcpy(buf, msg);
	while (rep)
	{
		rep = 0;
		while (buf[i])
		{
			if (buf[i] == buf[i + 1])
			{
				rep = 1;
				i += 2;
			}
			else
			{
				buf2[j++] = buf[i];
				i++;
			}
		}
		if (rep)
		{
			i = 0;
			j = 0;
			bzero(buf, 100);
			strcpy(buf, buf2);
			printf("%s\n", buf);
			bzero(buf2, 100);
		}
	}
	// printf("%s", buf2);
}
