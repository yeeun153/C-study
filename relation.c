#include <stdio.h>

int main(void) {
	int x, y;

	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d%d", &x, &y);

	printf("%d == %d�� �����: %d\n", x, y, x == y);
	printf("%d != %d�� �����: %d\n", x, y, x != y);
	printf("%d > %d�� �����: %d\n", x, y, x > y);
	printf("%d < %d�� �����: %d\n", x, y, x < y);
	printf("%d >= %d�� �����: %d\n", x, y, x >= y);
	printf("%d <= %d�� �����: %d\n", x, y, x <= y);

	return 0;
}