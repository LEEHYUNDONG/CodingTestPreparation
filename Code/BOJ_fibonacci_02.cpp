#include<iostream>
#include<vector>
using namespace std;
#define N 40
int fib[N+1] = {0, 1, };

int fibo(int n){
	if(n == 1 || n == 0) return fib[n];
	else if(fib[n] == 0) fib[n] = fibo(n-1) + fibo(n-2);
	return fib[n]
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	fib[0] = 0; fib[1] = 1;

	for(int i = 0;i < t;i++){
		int n; cin >> n;
		if(n == 0) cout << "1 0" << '\n';
		else cout << fibo(n-1) << ' ' << fibo(n) << '\n';
	}
	//for(auto a:fib) cout << a <<endl;


}
