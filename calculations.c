#include <stdio.h>
int main(void)
{
	int x;
	int y;
	int result;

	printf("ù ��° ���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &x);

	printf("�� ��° ���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &y);

	result = x + y;
	printf("�� ���� ��=%d\n", result);
	result = x - y;
	printf("�� ���� ��=%d\n", result);
	result = x * y;
	printf("�� ���� ��=%d\n", result);
	result = x / y;
	printf("�� ���� ��=%d\n", result);

	return 0;
}