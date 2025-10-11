#include <ctype.h>
#include <stdio.h>

int	main()
{
	char	tmp[200];
	char	code[5];
	char	*buf;

	scanf("%[^\n]", tmp);
	buf = tmp;
	code[0] = toupper(*buf);
	code[1] = '.';
	code[3] = '.';
	while (*buf)
	{
		if (*buf == ' ' && *(buf + 1) != '\0')
			code[2] = toupper(*(buf + 1));
		buf++;
	}
	printf("%s\n", code);
}
