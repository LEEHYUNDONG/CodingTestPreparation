#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool cmp(const vector<string>& a, const vector<string>& b){
	return (a[1] < b[1]);
}
int main(){
	vector<vector<string>> clothes(3, vector<string>(2, ""));
       	//init
	clothes[0].push_back("yellow_hat");
	clothes[0].push_back("headgear");

	clothes[1].push_back("blue_sunglass");
	clothes[1].push_back("eyewear");

	clothes[2].push_back("green_turban");
	clothes[2].push_back("headgear");


	cout << clothes.size() << endl;
	int answer = clothes.size();
	sort(clothes.begin(), clothes.end(), &cmp);

	for(int i = 0;i < clothes.size();i++){
		for(int j = 0;j < clothes[0].size();j++){
			cout << clothes[i][j] << " ";
		}
		cout << endl;
	}
	for(int i = 0;i < clothes.size()-1;i++){
		if(clothes[i][1] == clothes[i+1][1]) answer++;
	}
	cout << answer << endl;


	return 0;
}
