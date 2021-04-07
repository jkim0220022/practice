#pragma once
#include <iostream>

using namespace std;

class SoSimple
{
	int num;

public:
	SoSimple(int n) : num(n)
	{
	}
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void SimpleFunc()
	{
		cout << "SimpleFunc : " << num << endl;
	}
	void SimpleFunc() const
	{
		cout << "const SimpleFunc : " << num << endl;
	}
};

void YourFunc(const SoSimple &obj)
{
	obj.SimpleFunc();
}