#include <stdio.h>
#include <stdlib.h>

main(void)
{
	int* pi;

	pi = (int*)malloc(5 * sizeof(int));

	if (pi == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}
	*pi = 1;
	*(pi + 1) = 2;
	*(pi + 2) = 3;
	*(pi + 3) = 4;
	*(pi + 4) = 5;

	free(pi);
	return 0;
}