#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){

	int answer = 0;
	vector<int> citations({3, 0, 6, 1, 5});

	sort(citations.begin(), citations.end(), greater<int>());

	for(int i = 0;i < citations.size();i++){
		if(citations[i] <= answer) break;
		answer++;
	}
	cout << answer << endl;
	return 0;
}
