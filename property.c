#include <stdio.h>

int main(void) {
	long long int property;
	long long int saving;

	printf("�Ŵ� ���� �ݾ��� �Է��Ͻÿ�: ");
	scanf("%lld", &saving);

	property = saving * 12 * 30;
	printf("30�� ���� ��� = %lld\n", property);

	return 0;
}