#include <stdio.h>
#include <string.h>

static int	is_palindrome(char *msg)
{
	int		start;
	int		end;
	
	start = 0;
	end = strlen(msg) - 1;
	while (start < end - start)
	{
		if (msg[start] != msg[end - start])
			return (0);
		start++;
	}
	return (1);
}
int	main()
{
	char	msg[100];

	scanf("%s", msg);
	printf(is_palindrome(msg) ? "It is Palindrome.\n" : "It is not Palindrome.\n");
	return (0);
}
