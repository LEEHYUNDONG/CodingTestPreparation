#include <iostream>
#include <vector>
#define N 1000
using namespace std;
typedef long long ll;

int tile[N + 1] = {
	0,
	1,
	2,
	3,
};

ll pave(int n)
{
	if (n == 1 || n == 2 || n == 3)
		return tile[n];
	else if (tile[n] == 0)
		tile[n] = (pave(n - 1) + pave(n - 2)) % 10007;
	return tile[n];
	
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;

	cout << pave(n) << '\n';
}
