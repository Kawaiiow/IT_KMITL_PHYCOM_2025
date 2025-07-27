#include <stdio.h>

int	main()
{
	double	dis;

	scanf("%lf", &dis);
	if (dis < 0 || dis > 58.855)
		printf("InValid");
	else if (dis > 52.900)
		printf("Chon Buri");
	else if (dis > 35.477)
		printf("Chachoengsao");
	else if (dis > 5.032)
		printf("Samut Prakarn");
	else
	 	printf("Bangkok");
	return (0);
}
