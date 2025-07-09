#include <stdio.h>

int main(void)
{
	char fname1[1000];
	char sname1[1000];
	char person2[1000];
	char person3[1000];

	scanf("%s", fname1);
	scanf("%s", sname1);
	scanf("%s", person2);
	scanf("%s", person3);
	printf("%s %s\n", fname1, sname1);
	printf("%s\n%s", person2, person3);
	return (0);
}

