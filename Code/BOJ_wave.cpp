//9461
#include <iostream>

using namespace std;
typedef long long ll;

ll dp[100000] = {
	0,
	1,
	1,
	1,
	2,
	2,
	3,
	4,
	5,
	7,
	9,
};

ll waveNum(int n)
{
	if (n <= 10) return dp[n];
	else if(dp[n]) return dp[n];
	else if (dp[n] == 0) return dp[n] = waveNum(n - 1) + waveNum(n - 5);
	return dp[n];
}
int main()
{
	int t; cin >> t;
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	for (int i = t; i > 0; i--){
		int n; cin >> n;
		cout << waveNum(n) << '\n';
	}
}
