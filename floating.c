#include <stdio.h>

int main(void) {
	float fvalue = 1234567890.12345678901234567890;
	double dvalue = 1234567890.12345678901234567890;

	printf("float�� ����=%35.25f\n", fvalue);
	printf("double�� ����=%35.25f\n", dvalue);

	return 0;
}