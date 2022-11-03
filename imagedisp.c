#include <stdio.h>
#include <windows.h>
#define SIZE 10

int main() {
	HDC hdc = GetWindowDC(GetForegroundWindow());

	FILE* fp = NULL;
	int buffer[SIZE];
	int size, count;

	fp = fopen("c:\\temp\\lena.raw", "rb");
	if (fp == NULL) {
		printf("error!");
		exit(1);
	}

	char image[256][256];

	fread(image, 1, 256 * 256, fp);
	fclose(fp);

	int r, c;

	for (r = 0; r < 256; r++)
	{
		for (c = 0; c < 256; c++) {
			int red = image[r][c];
			int blue = image[r][c];
			int green = image[r][c];
			SetPixel(hdc, c, r, RGB(red, green, blue));
		}
	}
	fclose(fp);

	return 0;
}