#include <stdio.h>
int main(void)
{
	int usd;
	int krw;

	printf("달러화 금액을 입력하시오:");
	scanf("%d", &usd);

	krw = usd * 1120;
	printf("달러화 %d달러는 %d원입니다.\n", usd, krw);

	return 0;
}