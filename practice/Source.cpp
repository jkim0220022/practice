#include "Header.h"

Rect::Rect(double height, double width)
{
	height_ = height;
	width_ = width;
}

void Rect::height() const
{
	cout << "this rect's height : " << this->height_ << endl;
}

void Rect::width() const
{
	cout << "this rect's width : " << this->height_ << endl;
}

void Display::ShowSize(const Rect& target)
{
	target.height();
	target.width();
}
void Display::ShowDiagonal(const Rect& target)
{
	double diagonal;
	diagonal = sqrt(pow(target.height_, 2) + pow(target.width_, 2));

	cout << "this rect's diagonal : " << diagonal << endl;
}