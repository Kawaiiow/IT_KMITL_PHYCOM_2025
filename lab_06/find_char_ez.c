#include "strings.h"
#include <ctype.h>
#include <stdio.h>

int	main()
{
	char	msg[300];
	char	target;
	int		pos[300];
	int		i;
	int		amount;
	
	i = 0;
	amount = 0;
	scanf("%[^\n]\n", msg);
	scanf("%c", &target);
	bzero(pos, sizeof(pos));
	while (msg[i])
	{
		if (tolower(msg[i]) == tolower(target))
			pos[amount++] = i + 1;
		i++;
	}
	if (amount)
	{
		i = 0;
		printf("There is/are %d \"%c\" in the above sentences.\nPosition:", amount, target);
		while (pos[i])
		{
			if (i != amount - 1)
				printf(" %d,", pos[i]);
			else
				printf(" %d", pos[i]);
			i++;
		}
	}
	else
		printf("Not found.\n");
	return (0);
}
