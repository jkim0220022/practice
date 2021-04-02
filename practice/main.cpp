#include "Header.h"

struct print
{
	string mes;
	print(string& m) : mes(m) {}
	void operator()(int a) const
	{
		cout << mes << endl;
		cout << a << endl;
	}
};

int main()
{
	int ari[] = { 2,8,5,1,9 };
	vector<int> vi(&ari[0], &ari[5]);

	sort(vi.begin(), vi.end());
	for_each(vi.begin(), vi.end(), print(string("element value : ")));
	for_each(vi.begin(), vi.end(), print(string("other message : ")));

	return 0;
}