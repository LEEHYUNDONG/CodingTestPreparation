#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	vector<int> reserve({2, 3});
	vector<int> lost({1, 2});
	int item = 0;
	int r = 0;
	int n; cin >> n;
	for(int i = lost.size()-1;i >= 0;i--){
		if(reserve[r] == lost[i]){ n--; continue;}
		if(lost[i] == reserve[r]-1 || lost[i] == reserve[r]+1) {r++;}
		else n--;
	}
	
	cout << n << endl;


}
