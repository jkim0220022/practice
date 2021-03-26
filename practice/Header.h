#pragma once
#include <iostream>

using namespace std;

class Book
{
	int current_page_;
	void set_percent();
public:
	Book(const string& title, int total_page);

	string title_;
	int total_page_;
	double percent_;

	void Move(int page);
	void Open();
	const Book& ThickerBook(const Book&);
};