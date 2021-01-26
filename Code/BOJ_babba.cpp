#include <iostream>
#include <string>
#include <vector>
using namespace std;
int a[45] = {
	1,
	0,
	1,
};
int b[45] = {
	0,
	1,
	1,
};
int main()
{
	int n;
	cin >> n;

	if (n >= 3)
	{
		for (int i = 3; i <= n; i++)
		{
			a[i] = a[i - 1] + a[i - 2];
			b[i] = b[i - 1] + b[i - 2];
		}
	}
	cout << a[n] << " " << b[n] << '\n';
}
