#include <stdio.h>
#include "string.h"

typedef struct s_student_info
{
	char	fname[60];
	char	sname[60];
	char	gender[7];
	int		age;
	char	id[12];
	float	gpa;
}	student_info;

void	print_student(student_info *student)
{
	printf("%s %c %s (%d) ID: %s GPA %.2f", !strcmp(student->gender, "Male") ? "Mr" : "Miss", student->fname[0], student->sname, student->age, student->id, student->gpa);
}

student_info	create_student()
{
	student_info	res;

	scanf("%s %s %s %d %s %f", res.fname, res.sname, res.gender, &res.age, res.id, &res.gpa);
	return (res);
}

int	main()
{
	student_info s;

	s = create_student();
	print_student(&s);
}
