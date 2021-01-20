#include<iostream>
using namespace std;

int num[10+1] = {0, 1, 2, 4, };

int sumT(int n){
	if(n == 1 || n == 2|| n == 3) return num[n];
	else if(num[n] == 0) num[n] = sumT(n-1) + sumT(n-2) + sumT(n-3);
	return num[n];
}
int main(){
	int t; cin >> t;
	for(int i = 0;i < t;i++){
		int n; cin >> n;
		cout << sumT(n) << endl;
	}
	//for(int i = 1;i < 11;i++) cout << sumT(i) << endl;

}
