#include <stdio.h>

int main(void)
{
	int a[] = { 10,20,30,40,50 };
	int* p;

	p = a;
	printf("a[0]=%d  a[1]=%d  a[2]=%d \n", a[0], a[1], a[2]);
	printf("p[0]=%d  p[1]=%d  p[2]=%d \n", p[0], p[1], p[2]);

	return 0;
}