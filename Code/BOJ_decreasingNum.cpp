#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;


ll dNum(int n){
	int num = 9;
	int index = 10;

	if(n < 10) return n;
	else{
		while(n > 10){
			num++;
			if(num < 10*index){
				if(num / 10 > num % 10) n--;
			}else if

		}
	}
	return num;
}
int main(){
	int n; cin >> n;
	cout << dNum(n) << '\n';
}
