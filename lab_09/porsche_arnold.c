#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef PORSCHE
# define PORSCHE "Porsche Arnold"
#endif

int	main()
{
	char	*str;
	char	*ptr;
	
	str = (char *)malloc(15 * sizeof(char));
	if (!str)
		return (0);
	strcpy(str, PORSCHE);
	ptr = str;
	while (*ptr)
		printf("%c", *(ptr++));
	free(str);
	return (0);
}

