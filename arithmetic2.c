#include <stdio.h>

int main(void) {
	double x, y, result;

	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%lf %lf", &x, &y);

	result = x + y;
	printf("%f + %f = %f\n", x, y, result);

	result = x - y;
	printf("%f - %f = %f\n", x, y, result);

	result = x * y;
	printf("%f * %f = %f\n", x, y, result);

	result = x / y;
	printf("%f / %f = %f\n", x, y, result);

	return 0;
}