#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	*str;
	char	*buf;
	size_t	i;
	size_t	size;

	i = 0;
	size = 100;
	buf = malloc(1);
	str = calloc(100, sizeof(char));
	scanf("%c", buf);
	while (*buf != '-')
	{
		*(str + i++) = *buf;
		if (i >= size)
		{
			size *= 2;
			char	*tmp = realloc(str, size);
			str = tmp;
		}
		scanf("\n%c", buf);
	}
	printf("%s\n", str);
	int j = i - 1;
	while (j >= 0)
		printf("%c", *(str + j--));
	return (0);
}
