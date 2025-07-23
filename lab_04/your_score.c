#include <stdio.h>

int	main()	{	float	score;	score = 0;	scanf("%f", &score);	score > 100 ? printf("Out of Range\n") : score >= 80 ? printf("A\n") : score >= 70 ? printf("B\n") : score >= 60 ? printf("C\n") : score >= 50 ? printf("D\n") : score >= 0 ? printf("F\n") : printf("Out of Range\n");	return (0); }
