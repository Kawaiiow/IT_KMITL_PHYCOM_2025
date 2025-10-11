#include <stdio.h>
#include <stdlib.h>
#include "string.h"

typedef struct s_weather
{
	char	outlook[9];
	int		temperature;
	float	humidity;
	char	wind;
}	weather;

static	weather*	init_record(int n)
{
	weather	*res;

	res = calloc(n, sizeof(weather));
	if (!res)
		return (NULL);
	for (int i = 0; i < n; i++)
		scanf("%s %d %f %c", res[i].outlook, &res[i].temperature, &res[i].humidity, &res[i].wind);
	return (res);
}

static void	playing_decision(weather *wt)
{
	if (!strcmp(wt->outlook, "overcast") || (!strcmp(wt->outlook, "rain") && wt->wind == 'F') || (!strcmp(wt->outlook, "sunny") && wt->humidity < 77.5))
		printf("yes\n");
	else
		printf("no\n");
}

int	main()
{
	weather	*record;
	int		n;

	scanf("%d", &n);
	record = init_record(n);
	if (!record)
		return (0);
	for (int i = 0; i < n; i++)
		playing_decision(record + i);
	free(record);
}
