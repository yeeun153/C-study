#include <stdio.h>

int main(void)
{
	int i = 0;
	do
	{
		printf("1---���Ͽ���\n");
		printf("2---���������ϱ�\n");
		printf("3---����\n");
		printf("�ϳ��� �����Ͻÿ�: ");
		scanf("%d", &i);
	} while (i < 1 || i >3);

	printf("���õ� �޴�=%d\n", i);
	return 0;
}