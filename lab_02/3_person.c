#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*fname1 = (char *)calloc(1000, sizeof(char));
	char	*sname1 = (char *)calloc(1000, sizeof(char));
	char	*person2 = (char *)calloc(1000, sizeof(char));
	char	*person3 = (char *)calloc(1000, sizeof(char));

	scanf("%s %s\n%[^\n]\n%[^\n]", fname1, sname1, person2, person3);
	printf("Person 1: %s %s\n", fname1, sname1);
	printf("Person 2: %s\n", person2);
	printf("Person 3: %s\n", person3);
	free(fname1);
	free(sname1);
	free(person2);
	free(person3);
	return (0);
}
