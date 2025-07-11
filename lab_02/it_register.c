#include <stdio.h>

int	main(void)
{
	char	fname[30];
	char	sname[30];
	char	id[8];
	int 	d, m, y;
	float	gpa;

	scanf("%s %s %s %d/%d/%d %f", fname, sname, id, &d, &m, &y, &gpa);
	printf("Fullname: %s %s\n", fname, sname);
	printf("ID: %s\n", id);
	printf("DOB: %.2d-%.2d-%.4d\n", d, m, y);
	printf("GPA: %.2f", gpa);
	return (0);
}
