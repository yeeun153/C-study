﻿#include <stdio.h>

int get_integer()
{
	int value;
	printf("정수를 입력하시오 : ");
	scanf("%d", &value);
	return value;
}

int main(void)
{
	int x = get_integer();
	int y = get_integer();
	int result = x + y;
	printf("두 수의 합 = %d \n", result);

	return 0;
}