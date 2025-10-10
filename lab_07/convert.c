#include "strings.h"
#include <stdio.h>
#include <ctype.h>

char	*convert(char *str)
{
	char	*s;

	s = str;
	while (*s)
	{
		if (isupper(*s))
			*s += 32;
		else if (islower(*s))
			*s -= 32;
		s++;
	}
	return (str);
}

int	main()
{
	char	s1[101];
	char	s2[101];

	scanf("%[^\n] %[^\n]", s1, s2);
	printf("*** Results ***\n");
	printf("%s\n%s\n", convert(s1), convert(s2));
	printf("***************\n");
	if (!strcasecmp(s1, s2))
		printf("Both strings are the same.\n");
	else
		printf("Both strings are not the same.\n");
}
