#include <stdio.h>
#include <string.h>

struct employee {
	int number;
	char name[20];
	int age;
	char tel[20];
};

int main(void)
{
	struct employee e[10] =
	{
	{1,"홍길동",20,"111-1111" },
	{2,"강감찬", 25, "111-1112" },
	{3,"홍길동", 60, "111-1113" },
	{4,"이기동", 40, "111-1114" },
	{5,"권김율", 50, "111-1115" },
	{6,"아리랑", 45, "111-1116" },
	{7,"사나이", 32, "111-1117" },
	{8,"이리안", 23, "111-1118" },
	{9,"홍길순", 29, "111-1119" },
	{10,"감놔라", 62, "111-1120" }
	};

	int i;
	for (i = 0; i < 10; i++)
		if (e[i].age >= 20 && e[i].age <= 30)
			printf("%s\n", e[i].name);
	return 0;
}