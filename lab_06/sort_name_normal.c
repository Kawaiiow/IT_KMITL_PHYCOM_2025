#include "strings.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	sort_namelist(char **list, int size)
{
	char	*tmp;
	int		i;
	int		t;

	t = 0;
	while (t < size - 1)
	{
		i = 0;
		while (i < (size - 1) - t)
		{
			if (strcmp(list[i], list[i + 1]) > 0)
			{
				tmp = list[i + 1];
				list[i + 1] = list[i];
				list[i] = tmp;
			}
			i++;
		}
		t++;
	}
}

int	main()
{
	char	**list;
	char	*tmp;

	list = malloc(sizeof(char *) * (20 + 1));
	for (int i = 0; i < 20; i++)
	{
		list[i] = malloc(60 * sizeof(char));
		bzero(list[i], 60 * sizeof(char));
	}
	for (int i = 0; i < 20; i++)
	{
		scanf("\n%[^\n]", *(list + i));
		tmp = *(list + i);
		*tmp = toupper(*tmp);
		tmp++;
		while (*tmp)
		{
			if (*(tmp - 1) == ' ')
				*tmp = toupper(*tmp);
			else
				*tmp = tolower(*tmp);
			tmp++;
		}		
	}
	sort_namelist(list, 20);
	for (int i = 0; i < 20; i++)
	{
		printf("%s\n", *(list + i));
		free(*(list + i));
	}
	free(list);
	return (0);
}
