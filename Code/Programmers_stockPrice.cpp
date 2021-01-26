#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

queue<int> q;

vector<int> solution(vector<int> prices){
	int l = prices.size();
	vector<int> answer(l, 0);
	for(int i = 0;i < l;i++){
		for(int j = i+1;j < l;j++){
			answer[i] += 1;
			if(prices[i] > prices[j]) break;
		}

	}
	return answer;
}

int main(){
	vector<int> prices({1, 2, 3, 2, 3});
	vector<int> ans;

	ans = solution(prices);
	for(auto a: ans) cout << a << '\n';

}
