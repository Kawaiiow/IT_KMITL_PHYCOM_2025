#include <stdio.h>

int	main()
{
	char	alp[1];

	scanf("%c", alp);
	if (*alp >= 'a' && *alp <= 'z')
		*alp -= 32;
	else if (*alp >= 'A' && *alp <= 'Z')
		*alp += 32;
	else
	{
		printf("error");
		return (0);
	}
	printf("%c", *alp);
	return (0);
}
