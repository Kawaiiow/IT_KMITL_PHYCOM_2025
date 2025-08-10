#include "strings.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	insc(char *mem, char c)
{
	while (*mem)
	{
		if (*mem == c)
			return (1);
		mem++;
	}
	*mem = c;
	return (0);
}

int	main()
{
	char	*buffer;
	char	*tmp;
	char	target;
	char	*mem;
	int		size;
	int		n;

	scanf("%d", &size);
	buffer = (char *)malloc((size + 1) *sizeof(char));
	if (!buffer)
		return (0);
	mem = (char *)malloc((size + 1) *sizeof(char));
	if (!mem)
		return (0);
	buffer[size] = '\0';
	bzero(mem, (size + 1) * sizeof(char));
	for (int i = 0; i < size; i++)
		scanf("\n%c", buffer + i);
	for (int i = 0; i < size; i++)
		buffer[i] = tolower(buffer[i]);
	while (*buffer)
	{
		if (!insc(mem, *buffer))
		{
			target = *buffer;
			n = 0;
			tmp = buffer;
			while (*tmp)
			{
				if (*tmp == target)
					n++;
				tmp++;
			}
			printf("%c: %d\n", target, n);
		}
		buffer++;
	}
	buffer -= size;
	free(mem);
	free(buffer);
	return (0);
}
