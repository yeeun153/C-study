#include <stdio.h>

int main(void)
{
	int x, y;

	printf("ù ��° ��=");
	scanf("%d", &x);
	printf("�� ��° ��=");
	scanf("%d", &y);

	printf("ū ��=%d\n",(x>y)?x:y);
	printf("���� ��=%d\n", (x < y) ? x : y);

	return 0;
}