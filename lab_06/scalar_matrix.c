#include <stdio.h>

typedef struct s_3v
{
	double	x;
	double	y;
	double	z;
}	t_s3v;

typedef struct s_3dm
{
	t_s3v	i;
	t_s3v	j;
	t_s3v	k;
}	t_3dm;

static int	is_scalar(t_3dm *mat)
{
	if (mat->i.x != mat->j.y || mat->i.x != mat->k.z || mat->j.y != mat->k.z || \
		mat->i.y || mat->i.z || mat->j.x || mat->j.z || mat->k.x || mat->k.y)
		return (0);
	return (1);
}

static void	init_matrix(t_3dm *mat)
{
	scanf("%lf %lf %lf", &mat->i.x, &mat->i.y, &mat->i.z);
	scanf("%lf %lf %lf", &mat->j.x, &mat->j.y, &mat->j.z);
	scanf("%lf %lf %lf", &mat->k.x, &mat->k.y, &mat->k.z);
}

int	main()
{
	t_3dm	a;

	init_matrix(&a);
	if (is_scalar(&a))
		printf("")
	return (0);
}
