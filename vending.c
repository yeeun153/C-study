#include <stdio.h>

int main(void) {
	int money, price, change;

	printf("������ ��: ");
	scanf("%d", &money);

	printf("���� ��: ");
	scanf("%d", &price);

	change = money - price;
	printf("�Ž�����: %d\n\n", change);

	int coin100s = change / 100;
	change = change % 100;

	int coin10s = change / 10;
	change = change % 10;

	printf("100�� ������ ����: %d\n", coin100s);
	printf("10�� ������ ����: %d\n", coin10s);
	return 0;
}