#include <stdio.h>
#include "string.h"
#include <math.h>

int	main()
{
	char	fmsg[50];
	char	smsg[40];
	char	*f;
	char	*s;
	int		space;
	int		fpad;
	int		spad;

	scanf("%d\n%[^\n]\n%[^\n]", &space, fmsg, smsg);
	fpad = (int)ceil(space / 2.0 - (strlen(fmsg) / 2.0));
	spad = (int)ceil(space / 2.0 - (strlen(smsg) / 2.0));
	f = fmsg;
	s = smsg;
	for (int i = 0; i < space; i++)
		printf("*");
	printf("\n");
	for (int i = 0; i <= space; i++)
	{
		if (!i || i == space)
			printf("*");
		else if (i < fpad || i > fpad + (int)strlen(fmsg))
			printf(" ");
		else if (i < space - 1 && *f)
		{
			printf("%c", *(f++));
		}
	}
	printf("\n");
	for (int i = 0; i <= space; i++)
	{
		if (!i || i == space)
			printf("*");
		else if (i < spad || i > spad + (int)strlen(smsg))
			printf(" ");
		else if (i < space - 1 && *s)
		{
			printf("%c", *(s++));
		}
	}
	printf("\n");
	for (int i = 0; i < space; i++)
		printf("*");
	printf("\n");
}
