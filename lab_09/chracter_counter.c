#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	*buffer;
	char	c;
	int		l_case;
	int		u_case;
	int		d_case;

	l_case = 0;
	u_case = 0;
	d_case = 0;
	buffer = calloc(101, sizeof(char));
	if (!buffer)
		return 0;
	scanf("%[^\n]s", buffer);
	while (*buffer)
	{
		c = *buffer;
		if (c >= 'a' && c <= 'z')
			l_case++;
		else if (c >= 'A' && c <= 'Z')
			u_case++;
		else if (c >= '0' && c <= '9')
			d_case++;
		buffer++;
	}
	printf("Lowercase letters: %d\nUppercase letters: %d\nDigits: %d\n", l_case, u_case, d_case);
	return (0);
}
