﻿#include <stdio.h>

int main(void)
{
	int number = 10;
	int* p;

	p = &number;
	
	printf("변수 number의 주소 = %u\n", &number);
	printf("포인터의 값 = %u\n", p);
	printf("변수 number의 주소 = %d\n", number);
	printf("포인터의 값 = %d\n", *p);

	return 0;

}