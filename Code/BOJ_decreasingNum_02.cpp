#include <iostream>
#define N 1000001
using namespace std;

typedef long long ll;

ll num[N];

int main()
{
	int n;
	cin >> n;
	int ni = 10;
	for (int i = 0; i <= 9; i++)
		num[i] = i;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < (num[i] % 10); j++)
		{
			cout << "ni :" << ni << "\ni :" << i << " j :" << j << '\n';
			cout << "num[i] :" << num[i] << '\n';
			num[ni++] = num[i] * 10 + j;
		}
		cout << "*************\n";
	}
	if (n > 1022)
		cout << "-1\n";
	else
		cout << num[n] << '\n';
	for(int i = 0;i < 100;i++){
		cout << num[i] << endl;
	}
}
