#include "strings.h"
#include <ctype.h>
#include <stdio.h>

int	main()
{
	char	tmp[150];
	char	*buffer;
	int		word;
	int		letter;

	word = 0;
	letter = 0;
	bzero(tmp, 150);
	scanf("%[^\n]", tmp);
	buffer = tmp;
	if (*buffer)
		word++;
	while (*buffer)
	{
		if (*buffer == ' ')
			word++;
		buffer++;
	}
	printf("%d words\n----\n", word);
	buffer = tmp;
	while (*buffer)
	{
		letter = 0;
		while (*buffer != ' ' && *buffer != '\0')
		{
			printf("%c", tolower(*buffer));
			letter++;
			buffer++;
		}
		printf(" : %d\n", letter);
		buffer++;
	}
}
