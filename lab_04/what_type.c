#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	main()
{
	char	c;

	scanf("%c", &c);
	if (isdigit(c))
		write(STDOUT_FILENO, "number\n", 7);
	else if (islower(c))
		write(STDOUT_FILENO, "lowercase\n", 10);
	else if (isupper(c))
		write(STDOUT_FILENO, "uppercase\n", 10);
	else
		write(STDOUT_FILENO, "error\n", 6);
	return (0);
}
