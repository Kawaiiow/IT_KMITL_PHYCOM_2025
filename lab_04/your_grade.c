#include <ctype.h>
#include <stdio.h>

int	main()
{
	char	grade;

	scanf("%c", &grade);
	grade = toupper(grade);
	switch (grade) {
		case 'A':
			printf("Genius\n");
			break;
		case 'B':
			printf("Good\n");
			break;
		case 'C':
			printf("Try Harder\n");
			break;
		case 'D':
			printf("Very Bad\n");
			break;
		case 'F':
			printf("Fail\n");
			break;
		default:
			printf("Invalid Input\n");
	}
}
