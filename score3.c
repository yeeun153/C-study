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
		printf("���� ���� ����!\n");
		exit(0);
	}

	do {
		printf("\n�й�:");
		scanf("%d", &number);

		printf("�̸�:");
		scanf("%s", name);

		printf("����:");
		scanf("%f", &score);

		fprintf(fp, "%d %s %d", number, name, score);
		printf("������ �߰��� ���? (y/n):");
		ch = getche();
	} while (ch != 'n');

	fclose(fp);
	return 0;
}