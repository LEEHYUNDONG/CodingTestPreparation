#include <iostream>
#include <cstring>
using namespace std;
int dp[31][31];

int bridge(int m, int n)
{
	if (m == n || n == 0)
		return 1;
	if (dp[m][n])
		return dp[m][n];
	return dp[m][n] = bridge(m - 1, n - 1) + bridge(m - 1, n);
}
int main()
{
	int t, n, m;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n >> m;
		memset(dp, 0, sizeof(dp)); //dp 초기화
		cout << bridge(m, n) << endl;
	}
}
