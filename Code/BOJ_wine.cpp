#include<iostream>
#include<vector>
using namespace std;
int w[10000+1];
int dp[10000+1];

int maxWine(int n){
	dp[0] = w[0]; dp[1] = w[1];
	if(n > 1) dp[2] = w[1] + w[2];
	for(int i = 3;i <=n;i++){
		dp[i] = max(dp[i-3]+w[i]+w[i-1], dp[i-2] + w[i]);
		dp[i] = max(dp[i-1], dp[i]);
	}
	return dp[n];

}
int main(){
	int n;cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> w[i];
	}
	cout << maxWine(n) << '\n';

}
