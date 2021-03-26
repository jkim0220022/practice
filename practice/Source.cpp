#include "Header.h"

void Display(const Book& bk)
{
	cout << "책의 제목은 " << bk.title << "이고, ";
	cout << "저자는 " << bk.author << "이며, ";
	cout << "가격은 " << bk.price << "원입니다.";
}
