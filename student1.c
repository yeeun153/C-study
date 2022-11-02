#include <stdio.h>
#include <stdlib.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;

	s.number = 2021111335;
	strcpy(s.name, "손예은");
	s.grade = 4.5;

	printf("학번: %d\n", s.number);
	printf("이름 :%s\n", s.name);
	printf("학점 :%f\n", s.grade);

	return 0;
}