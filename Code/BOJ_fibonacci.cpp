#include<iostream>
#include<vector>
using namespace std;
#define N 40
int zeros[N];
int ones[N];
int fib[N+1];

int fibo(int n, int i){
	if(n == 0){zeros[i]++; return 0;}
	else if(n == 1){ones[i]++; return 1;}
	else{
		fib[n] = fib[n-1] + fib[n-2];
		return fibo(n-1, i)+fibo(n-2, i);
	}
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	fib[0] = 0; fib[1] = 1;

	for(int i = 0;i < t;i++){
		int n; cin >> n;
		fibo(n, i);
	}
	for(int i = 0;i < t;i++){
		cout << zeros[i] << " " << ones[i] << '\n';
	}
	//for(auto a:fib) cout << a <<endl;


}
