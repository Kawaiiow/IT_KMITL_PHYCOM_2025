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

static t_3dm	mul_3dm(t_3dm *a, t_3dm *b)
{
	t_3dm	res;

	res.i = (t_s3v){ \
					a->i.x * b->i.x + a->i.y * b->j.x + a->i.z * b->k.x, \
					a->i.x * b->i.y + a->i.y * b->j.y + a->i.z * b->k.y, \
					a->i.x * b->i.z + a->i.y * b->j.z + a->i.z * b->k.z, \
	};
	res.j = (t_s3v){ \
					a->j.x * b->i.x + a->j.y * b->j.x + a->j.z * b->k.x, \
					a->j.x * b->i.y + a->j.y * b->j.y + a->j.z * b->k.y, \
					a->j.x * b->i.z + a->j.y * b->j.z + a->j.z * b->k.z, \
	};
	res.k = (t_s3v){ \
					a->k.x * b->i.x + a->k.y * b->j.x + a->k.z * b->k.x, \
					a->k.x * b->i.y + a->k.y * b->j.y + a->k.z * b->k.y, \
					a->k.x * b->i.z + a->k.y * b->j.z + a->k.z * b->k.z, \
	};
	return (res);
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
	t_3dm	b;
	t_3dm	res;

	init_matrix(&a);
	init_matrix(&b);
	res = mul_3dm(&a, &b);
	printf("A x B\n");
	printf("%.2lf %.2lf %.2lf\n", res.i.x, res.i.y, res.i.z);
	printf("%.2lf %.2lf %.2lf\n", res.j.x, res.j.y, res.j.z);
	printf("%.2lf %.2lf %.2lf\n", res.k.x, res.k.y, res.k.z);
	return (0);
}
