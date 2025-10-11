#include <stdio.h>
#include <stdlib.h>
#include "string.h"

typedef struct s_employee
{
	char	id[10];
	char	name[100];
	long	salary;
	long	sales;
}	employee;

void	init_record(employee **rec, int n)
{
	*rec = calloc(n, sizeof(employee));
	if (!*rec)
		return ;
	for (int i = 0; i < n; i++)
		scanf("%s %s %ld %ld", (*rec)[i].id, (*rec)[i].name, &(*rec)[i].salary, &(*rec)[i].sales);
}

void	calculate_salary(employee *emp)
{
	printf("%s\n", emp->id);
	printf("%s\n", emp->name);
	printf("%ld\n", emp->sales);
	printf("%.2lf\n", emp->sales * 0.02);
	printf("%ld\n", emp->salary);
	printf("%.2lf\n", emp->salary + (emp->sales * 0.02));
}

int	main()
{
	employee	*record;
	int			n;
	char		tofind[10];

	scanf("%d", &n);
	record = NULL;
	init_record(&record, n);
	scanf("\n%s", tofind);
	if (!record)
		return (1);
	for (int i = 0; i < n; i++)
	{
		if (!strcmp(tofind, record[i].id))
		{
			calculate_salary(record + i);
			free(record);
			return (0);
		}
	}
	printf("ID not found !!!\n");
	free(record);
}
