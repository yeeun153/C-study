#include <stdio.h>

int main(void)
{
	int score;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &score);

	if (score >= 60)
	{
		printf("�հ��Դϴ�.\n");
		printf("���бݵ� ���� �� �ֽ��ϴ�.");
	}
	else
	{
		printf("���հ��Դϴ�.\n");
		printf("�ٽ� �����ϼ���.\n");
	}
	return 0;
}