#include <stdio.h>

int main(void)
{
	int i, n, sum;

	i = 1;
	sum = 0;

	while (i <= 1000)
	{
		sum += i;
		i++;
	}
	printf("���� %d�Դϴ�.\n", sum);

	return 0;
}