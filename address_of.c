﻿#include <stdio.h>

int main(void)
{
	int i = 10;
	char c = 69;
	double f = 12.3;

	printf("i의 주소: %u\n", &i);
	printf("c의 주소: %u\n", &c);
	printf("f의 주소: %u\n", &f);

	return 0;
}