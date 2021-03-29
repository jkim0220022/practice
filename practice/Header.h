#pragma once
#include <iostream>

using namespace std;

class Rect;

class Display
{
public:
	void ShowSize(const Rect& target);
	void ShowDiagonal(const Rect& target);
};

class Rect
{
	double height_;
	double width_;

public:
	Rect(double height, double width);
	void height() const;
	void width() const;
	friend void Display::ShowDiagonal(const Rect& target);
};