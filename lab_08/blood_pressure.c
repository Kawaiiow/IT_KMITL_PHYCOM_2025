#include <stdio.h>

int	main()
{
	int	sbp;
	int	dbp;

	scanf("%d %d", &sbp, &dbp);
	if (sbp > 140 || dbp > 90)
	{
		printf("Hypertension\n");
	}
	else
	{
		printf("Normal\n");
	}
	return (0);
}
