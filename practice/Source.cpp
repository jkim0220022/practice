#include "Header.h"

Book::Book(const string& title, int total_page)
{
	title_ = title;
	total_page_ = total_page;
	current_page_ = 0;
	set_percent();
}

void Book::set_percent()
{
	percent_ = (double)current_page_ / total_page_ * 100;
}

const Book& Book::ThickerBook(const Book& comp_book)
{
	if (comp_book.total_page_ > this->total_page_)
	{
		return comp_book;
	}
	else
	{
		return *this;
	}
}