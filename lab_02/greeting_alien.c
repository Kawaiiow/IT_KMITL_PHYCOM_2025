#include <unistd.h>

int main(void)
{
	write(STDOUT_FILENO, "\"_'Hello#\\%_%/#$My$#\\%_%/#Friend'_\"", 35);
	return (0);
}

