#include <stdio.h>
int main(void)
{
	int usd;
	int krw;

	printf("�޷�ȭ �ݾ��� �Է��Ͻÿ�:");
	scanf("%d", &usd);

	krw = usd * 1120;
	printf("�޷�ȭ %d�޷��� %d���Դϴ�.\n", usd, krw);

	return 0;
}