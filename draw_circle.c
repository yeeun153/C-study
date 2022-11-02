#include <windows.h>
#include <stdio.h>
HDC hdc;

void draw_circle(int x, int y, double radius)
{
	Ellipse(hdc, (int)(x - radius), (int)(y - radius), (int)(x + radius), (int)(y + radius));

	if (radius > 2.0)
	{
		radius *= 0.75;
		Sleep(100);
		draw_circle(x, y, radius);
	}
}

int main(void)
{
	hdc = GetWindowDC(GetForegroundWindow());
	draw_circle(300, 200, 200.0);
	return 0;
}