#include <stdio.h>

int main(void)
{
	FILE* fp;
	int number, count = 0;
	char name[20];
	float score, total = 0.0;

	if ((fp = fopen("scores.txt", "r")) == NULL)
	{
		fprintf(stderr, "성적 파일을 열 수 없습니다.\n");
		exit(1);
	}
	while (!feof(fp))
	{
		fscanf(fp, "%d %s %f", &number, name, &score);
		printf("%d %s %f\n", number, name, score);
		total += score;
		count++;
	}
	printf("평균=%f\n", total / count);
	fclose(fp);
	return 0;
}