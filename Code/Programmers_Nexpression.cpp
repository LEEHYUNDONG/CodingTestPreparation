#include<iostream>
#include<string>
#include<vector>

using namespace std;
int dp[100];

int solution(int N, int number){
	//N 1 <= N <= 9
	// 1 <= number <= 32,000
	string NN;
	NN = N+N;
	int ns = stoi(NN);

	return -1;

}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int N, number; cin >> N >> number;
	cout << solution(N, number) << endl;


}
