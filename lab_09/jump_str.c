#include <stdio.h>
#include <stdlib.h>

int	main()
{
	size_t	len;
	size_t	fq;
	char	*str;

	scanf("%zu %zu", &len, &fq);
	str = calloc(len + 1, sizeof(char));
	if (!str)
		return (0);
	scanf("\n%[^\n]", str);
	if (fq >= len)
		return (0);
	for (size_t i = 0; i < len && *(str + i) != '\0'; i+=fq)
	{
		printf("%c", *(str + i));
	}
	return (0);
}
