#include <stdio.h>

int	main()
{
	char	msg[100];
	int		i;

	i = 0;
	scanf("%[^\n]", msg);
	while (msg[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		printf("%c", msg[i]);
		i--;
	}
	return (0);
}
