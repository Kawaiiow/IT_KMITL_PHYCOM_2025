#include <stdio.h>
#include "string.h"
#include "strings.h"

int	main()
{
	char	msg[150];
	int		i;

	i = 0;
	bzero(msg, 150);
	scanf("%[^\n]", msg);
	while (*(msg + i))
	{
		if (*(msg + i) != ' ')
			printf("%c", *(msg + i));
		i++;
	}
}
