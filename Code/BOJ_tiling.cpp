#include<iostream>
using namespace std;
#define N 250
typedef unsigned long ll;

ll tile[N+1] = {0, 1, 3, };

ll pave(int n){
	if(n == 1|| n == 2) return tile[n];
	else if(tile[n] == 0){
		tile[n] = (pave(n-1) + 2*pave(n-2));
	}
	return tile[n];
}

int main(){
	int n; cin >> n;
	cout << pave(n) << '\n';
}
