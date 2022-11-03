#include <windows.h>
#include <stdlib.h>
#define SIZE 100

struct point {
	int x;
	int y;
};

int main(void)
{
	struct point p[SIZE];
	int i;

	for (int i = 0; i < SIZE; i++) {
		p[i].x = rand() % 500;
		p[i].y = rand() % 500;
	}
	HDC hdc = GetWindowDC(GetForegroundWindow());
	for (int i = 0; i < SIZE; i++) {
		Ellipse(hdc, p[i].x, p[i].y, p[i].x + 10, p[i].y + 10);
	}
	return 0;
}