#include <stdio.h>
int main(void)
{
	int sum;
	int price;
	int days;

	sum = 0;
	printf("������ ����ΰ���?:");
	scanf("%d", &days);

	printf("�װ��� ����:");
	scanf("%d", &price);
	sum = sum + price;

	printf("ȣ�� 1�� ����:");
	scanf("%d", &price);
	sum = sum + days * price;

	printf("�Ϸ翡 �ʿ��� �뵷:");
	scanf("%d", &price);
	sum = sum + days * price;

	printf("==============================\n");
	printf("�� ���� ���:%d\n", sum);
	printf("==============================\n");

	return 0;

}