#include <stdio.h>

int main(void) {
	int x = 9;
	int y = 10;

	printf("%08X & %08X = %08X\n", x, y, x & y);
	printf("%08X | %08X = %08X\n", x, y, x | y);
	printf("%08X ^ %08X = %08X\n", x, y, x ^ y);
	printf("~ %08X = %08X\n", x, ~x);

	return 0;
}