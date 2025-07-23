#include <unistd.h>

int	main()
{
	int	alp[1];

	read(STDIN_FILENO, alp, 1);
	if (*alp >= 'a' && *alp <= 'z')
		*alp -= 32;
	else if (*alp >= 'A' && *alp <= 'Z')
		*alp += 32;
	else
	{
		write(STDOUT_FILENO, "error", 5);
		return (1);
	}
	write(STDOUT_FILENO, alp, 1);
	return (0);
}
