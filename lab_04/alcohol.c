#include <stdio.h>

int	main()
{
	char	gender;
	double	weight;
	char	lics;
	double	vol;
	double	apc;
	int		n;
	int		hr;
	double	allevel;
	allevel = 0;

	scanf("%c %lf %c %lf %lf %d %d", &gender, &weight, &lics, &vol, &apc, &n, &hr);
	if (gender == 'M')
	{
		allevel = ((apc * (vol * n)) / 100.0) / (weight * 0.68 * 10);
	}
	else if (gender == 'F')
	{
		allevel = ((apc * (vol * n)) / 100.0) / (weight * 0.55 * 10);
	}
	allevel *= 1000.0;
	allevel -= 15 * hr;
	if ((int)allevel > 50 || lics == 'N')
		printf("Not Safe");
	else
		printf("Safe");
	return (0);
}
