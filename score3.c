#include <stdio.h>

int main(void)
{
	FILE* fp;
	int number;
	char name[30];
	int score;
	char ch;

	fp = fopen("scores.txt", "w");
	if (fp == NULL) {
		printf("파일 오픈 에러!\n");
		exit(0);
	}

	do {
		printf("\n학번:");
		scanf("%d", &number);

		printf("이름:");
		scanf("%s", name);

		printf("성적:");
		scanf("%f", &score);

		fprintf(fp, "%d %s %d", number, name, score);
		printf("데이터 추가를 계속? (y/n):");
		ch = getche();
	} while (ch != 'n');

	fclose(fp);
	return 0;
}