#include<string>
#include<vector>
#include<stack>
#include<iostream>
using namespace std;

vector<int> solution(vector<int> prices){
	vector<int> answer(prices.size());
	stack<int> s;
	int size = prices.size();
	for(int i = 0;i < size;i++){
		while(!s.empty() && prices[s.top()] > prices[i]) { // 감소하는 인덱스만 미리 계산
			answer[s.top()] = i-s.top(); 
			s.pop();
		}
		s.push(i); // 증가하는 인덱스들은 stack push 해놓는다.
	}
	while(!s.empty()){
		answer[s.top()] = size - s.top()-1;
		s.pop();
	}
	return answer;

}
int main(){
	vector<int> prices({1, 2, 3, 2, 3});
	vector<int> ans = solution(prices);

	for(auto a: ans) cout << a<< endl;

}
