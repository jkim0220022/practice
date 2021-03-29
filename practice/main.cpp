#include "Header.h"

int main()
{
	Rect rect01(10, 20);

	Display rect_display;
	rect_display.ShowSize(rect01);
	rect_display.ShowDiagonal(rect01);

	return 0;
}