#include <stdio.h>

int main(void)
{
	int temperature;

	printf("�µ��� �Է��Ͻÿ�:");
	scanf("%d", &temperature);

	if (temperature > 0)
		printf("������ �����Դϴ�.\n");
	else
		printf("������ �����Դϴ�.\n");

	printf("���� �µ��� %d���Դϴ�.\n", temperature);
	
	return 0;
}