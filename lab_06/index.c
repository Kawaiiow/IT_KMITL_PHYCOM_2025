#include <stdio.h>

int	main()
{
	int	m[] = {2, 20, 8, 10, 4, 6, 12, 18};
	int	n[] = {1, 3, 9, 7, 11, 15, 19};
	int	target;

	scanf("%d", &target);
	while (target < 1 || target > 20)
		scanf("%d", &target);
	for (int i = 0; i < sizeof(m) / sizeof(int); i++)
	{
		if (m[i] == target)
		{
			printf("%d is in M at index [%d]", target, i);
			return (0);
		}
	}
	for (int i = 0; i < sizeof(n) / sizeof(int); i++)
	{
		if (n[i] == target)
		{
			printf("%d is in N at index [%d]", target, i);
			return (0);
		}
	}
	return (0);
}
