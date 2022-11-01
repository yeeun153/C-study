#include <stdio.h>

int main(void)
{
	int a, b, c, largest;

	printf("3개의 정수를 입력하시오:");
	scanf("%d %d %d", &a, &b, &c);

	if (a > b && a > c)
		largest = a;
	else if (b > a && b > c)
		largest = b;
	else
		largest = c;

	printf("가장 큰 정수는 %d이다.\n", largest);

	return 0;
}