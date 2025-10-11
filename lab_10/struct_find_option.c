#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "strings.h"

typedef struct s_student_info
{
	char	fname[60];
	char	sname[60];
	char	gender[7];
	int		age;
	char	id[12];
	float	gpa;
}	student_info;

int	fname_cmp(const void *p1, const void *p2)
{
	return (strcmp(((student_info *)p1)->fname, ((student_info *)p2)->fname));
}

int	sname_cmp(const void *p1, const void *p2)
{
	return (strcmp(((student_info *)p1)->sname, ((student_info *)p2)->sname));
}
int	id_cmp(const void *p1, const void *p2)
{
	return (atoi(((student_info *)p1)->id) - atoi(((student_info *)p2)->id));
}

void	print_student(student_info *student)
{
	printf("%s %c %s (%d) ID: %s GPA %.2f\n", !strcmp(student->gender, "Male") ? "Mr" : "Miss", student->fname[0], student->sname, student->age, student->id, student->gpa);
}

student_info	create_student()
{
	student_info	res;

	scanf("%s %s %s %d %s %f", res.fname, res.sname, res.gender, &res.age, res.id, &res.gpa);
	return (res);
}

int	main()
{
	student_info	record[20];
	char			opt[10];

	bzero(opt, 10);
	for (int i = 0; i < 20; i++)
		record[i] = create_student();
	scanf("\n%s", opt);
	if (!strcasecmp(opt, "name"))
		qsort(record, 20, sizeof(student_info), fname_cmp);
	else if (!strcasecmp(opt, "surname"))
		qsort(record, 20, sizeof(student_info), sname_cmp);
	else if (!strcasecmp(opt, "id"))
		qsort(record, 20, sizeof(student_info), id_cmp);
	for (int i = 0; i < 20; i++)
		print_student(record + i);
}
