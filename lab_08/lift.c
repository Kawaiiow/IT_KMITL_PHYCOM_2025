#include "sys/types.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_info
{
	unsigned int	age;
	double	weight;
}	t_info;

void	input(t_info *rec)
{
	scanf("\n%u %lf", &rec->age, &rec->weight);
}

int	main()
{
	t_info	*rec;
	unsigned int	n;
	double	limit;
	double	sum;
	unsigned int	valid;

	valid = 0;
	sum = 0;
	scanf("%u %lf", &n, &limit);
	rec = malloc(n * sizeof(t_info));
	for (unsigned int i = 0; i < n; i++)
	{
		input(rec + i);
	}
	for (unsigned int i = 0; i < n; i++)
	{
		if (rec[i].age >= 12 && !valid)
			valid = 1;
		sum += rec[i].weight;
	}
	if (!valid || sum > limit)
		printf("Not Safe\n");
	else
		printf("Safe\n");
}
