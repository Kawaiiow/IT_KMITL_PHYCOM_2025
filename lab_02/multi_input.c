#include <stdio.h>

int main(void)
{
	char	str1[100];
	char	str2[100];
	char	str3[100];
	char	str4[100];

	scanf("%s", str1);
	scanf("%s", str2);
	scanf("%s", str3);
	scanf("%s", str4);
	printf("String 1: %.3s\n", str1);
	printf("String 2: %.4s\n", str2);
	printf("String 3: %.5s\n", str3);
	printf("String 4: %.6s\n", str4);
}

