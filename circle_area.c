#include <stdio.h>
#define PI 3.141592

int main(void) {
	double radius;
	double area;

	printf("���� �������� �Է��Ͻÿ�:");
	scanf("%lf", &radius);

	area = PI * radius * radius;
	printf("���� ����: %f\n", area);

	return 0;
}

