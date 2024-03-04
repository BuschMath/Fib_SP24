#include <iostream>

using namespace std;

int f(int n)
{
	cout << "f(" << n << ") called" << endl;
	if (n == 0)
		return 1;
	else if (n == 1)
		return 1;
	else
		return f(n - 1) + f(n - 2);
}

int main()
{
	cout << f(20) << endl;

	return 0;
}