#include <stdio.h>
#include <stdlib.h>
#include "string.h"

typedef struct s_book
{
	char	id[10];
	char	name[100];
	char	author[100];
}	book;

book	create_book()
{
	book	res;

	scanf("%s %s %s", res.id, res.name, res.author);
	return (res);
}

int	main()
{
	int		n;
	char	tofind[10];
	book	*record;

	scanf("%d %s", &n, tofind);
	record = calloc(n, sizeof(book));
	if (!record)
		return (0);
	for (int i = 0; i < n; i++)
		record[i] = create_book();
	for (int i = 0; i < n; i++)
	{
		if (!strcmp(tofind, record[i].id))
		{
			printf("%s %s %s\n", record[i].id, record[i].name, record[i].author);
			free(record);
			return (0);
		}
	}
	printf("Not Found\n");
	free(record);
}
