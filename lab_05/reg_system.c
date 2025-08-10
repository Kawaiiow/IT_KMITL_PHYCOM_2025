#include "strings.h"
#include <stdio.h>
#include <stdlib.h>

#ifndef REG_SIZE
# define REG_SIZE 50
#endif

typedef struct s_stat
{
	int		cond1;
	int		cond2;
	int		cond3;
	int		cond4;
	int 	sum_age;
	float 	sum_height;
	float 	sum_weight;
}	t_stat;

typedef struct	s_info
{
	int	age;
	int	height;
	int	weight;
}	t_info;

static void	init_stat(t_stat *stat)
{
	stat->cond1 = 0;
	stat->cond2 = 0;
	stat->cond3 = 0;
	stat->cond4 = 0;
	stat->sum_age = 0;
	stat->sum_height = 0;
	stat->sum_weight = 0;
}

static t_info	*init_record()
{
	t_info	*record;
	int		a;
	int		b;
	int		c;
	
	a = 0;
	b = 0;
	c = 0;
	record = malloc(REG_SIZE * sizeof(t_info));
	if (!record)
		return (NULL);
	bzero(record, REG_SIZE * sizeof(t_info));
	for (int i = 0; i < REG_SIZE; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		*(record + i) = (t_info){a, b, c};
	}
	return (record);
}

static void	display(t_stat *stat)
{
	printf("Age >= 20 and Height >= 160: %d\n", stat->cond1);
	printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", stat->cond2);
	printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", stat->cond3);
	printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", stat->cond4);
	printf("Average Age: %d\n", stat->sum_age / REG_SIZE);
	printf("Average Height: %.2f\n", ((float)stat->sum_height) / REG_SIZE);
	printf("Average Weight: %.2f\n", ((float)stat->sum_weight) / REG_SIZE);
}

int	main()
{
	t_info	*record;
	t_info	*tmp;
	t_stat	stat;

	init_stat(&stat);
	record = init_record();
	if (!record)
		return (0);
	for (int i = 0; i < REG_SIZE; i++)
	{
		tmp = record + i;
		stat.sum_age += tmp->age;
		stat.sum_height += tmp->height;
		stat.sum_weight += tmp->weight;
		if (tmp->age >= 20 && tmp->height >= 160)
			stat.cond1++;
		if (tmp->age < 20 && (tmp->height <= 180 || tmp->weight >= 60))
			stat.cond2++;
		if (tmp->age >= 30 && tmp->weight >= 40 && tmp->weight <= 80)
			stat.cond3++;
		if (tmp->age < 40 && (tmp->weight < 85 || tmp->height <= 200))
			stat.cond4++;
	}
	display(&stat);
	free(record);
	return (0);
}
