#include <stdio.h>

int main(void) {
	int money;
	int candy_price;

	printf("���� ������ �ִ� ��: ");
	scanf("%d", &money);
	printf("ĵ���� ����: ");
	scanf("%d", &candy_price);
	
	int n_candies = money / candy_price;
	printf("�ִ�� �� �� �ִ� ĵ���� ����=%d\n", n_candies);

	int change = money % candy_price;
	printf("ĵ�� ���� �� ���� ��=%d\n", change);
	return 0;
}