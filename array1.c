#include <stdio.h>

void sub(int* ptr)
{
	printf("%d \n", ptr[10]);
}

int main(void)
{
	int large_data[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };

	sub(large_data);
	return 0;
}