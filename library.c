#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE* fp;
struct library {
	char name[20];
	char author[20];
	char company[20];
};

void open();
void save();
void display();
void search();
void write();
void end();

void main()
{
	int i, select, count;
	i = select = count = 0;

	while (select != 6) {
		printf("\n====================\n");
		printf("1.파일 읽기\n");
		printf("2.추가\n");
		printf("3.출력\n");
		printf("4.검색\n");
		printf("5.파일 쓰기\n");
		printf("6.종료\n");
		printf("====================\n");
		printf("정수값을 입력하시오:");
		scanf("%d", &select);

		if (select == 1) open();
		else if (select == 2) save();
		else if (select == 3) display();
		else if (select == 4) search();
		else if (select == 5) write();
		else if (select == 6) end();
	}
}

void open()
{
	FILE* fp = fopen("booklist.txt", "r");
	if (fp != NULL)
		printf("파일 오픈 성공!");
}

void save()
{
	char name[20];
	char author[20];
	char company[20];
	fp = fopen("booklist.txt", "w");

	printf("제목:");
	scanf("%s", &name);

	printf("저자:");
	scanf("%s", &author);

	printf("출판사:");
	scanf("%s", &company);

	fprintf(fp, "제목:%s 저자:%s 출판사:%s", name, author, company);
	fclose(fp);
}

void display()
{
	char name[20];
	char author[20];
	char company[20];
	char buffer[50];


	fp = fopen("booklist.txt", "r");

	fgets(buffer, sizeof(buffer), fp);
	printf("%s\n", buffer);
	fclose(fp);
}

void search()
{
	char name[20];
	char author[20];
	char company[20];
	char buffer[50];

	printf("제목:");
	scanf("%s", &name);

	fp = fopen("booklist.txt", "r");
	fgets(buffer, sizeof(buffer), fp);

	printf(buffer);

	fclose(fp);
}

void write()
{
	FILE* fp = fopen("booklist.txt", "w");
	if (fp != NULL)
		printf("파일 오픈 성공!(2)");
}

void end()
{
	exit(0);
}