#include<iostream>
#include<vector>
#define N 1000001
using namespace std;

typedef long long ll;
ll f[N] = {1, 2, };
ll g[N] = {0, 1, };

ll pave(int n){
	if(n == 1||n == 2 ||n == 3) return f[n];
	else if(tile[n] == 0){
		tile[n] = (pave(n-1) + 2*pave(n-2))% 1000000007;
	}
	return tile[n];
}

int main(){
	int n; cin >> n;
	cout << pave(n) << '\n';

}
