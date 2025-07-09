#include <stdio.h>

int main(void)
{
	char	c;
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	scanf("%c", &c);
	scanf("%c", &c1);
	scanf("%c", &c2);
	scanf("%c", &c3);
	scanf("%c", &c4);
	printf("%c\n%c\n%c\n%c\n%c", c + 1, c1, c2 +1, c3, c4 + 1);
}

