﻿#include <stdio.h>

int main(void)
{
	long fact = 1;
	int i, n;

	printf("정수를 입력하시요: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		fact = fact * i;

	printf("%d!은 %d입니다.\n", n, fact);

	return 0;
}