#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int N; cin >> N;
	string sn ="";
	int sum = 0;
	vector<int> ans;
	int flag = 0;
	for(int i = N;i >= N/2;i--){
		sum = 0;
		sn = to_string(i);
		for(int j = 0;j < sn.length();j++){
			sum += sn[j]-'0';
		}
		if(sum + i == N){
			ans.push_back(i);
			flag = 1;
		}
	}
	if(flag == 1) cout << *min_element(ans.begin(), ans.end()) << endl;
	else cout << "0\n";

}
