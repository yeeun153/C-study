#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fp;

	fp = fopen("sales.txt", "a");
	fprintf(fp, "2017.3.1 매출 : %d \n", 200000);

	fclose(fp);
	return 0;
}