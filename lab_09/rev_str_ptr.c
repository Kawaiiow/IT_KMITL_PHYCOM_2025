#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	*buf;
	char	*tmp;

	buf = NULL;
	buf = calloc(101, sizeof(char));
	if (!buf)
		return (0);
	scanf("%[^\n]s", buf);
	tmp = buf;
	while (*(tmp++));
	tmp--;
	while (tmp > buf)
		printf("%c", *(--tmp));
	free(buf);
	return (0);
}

