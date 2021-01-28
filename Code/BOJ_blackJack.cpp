#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int N, M;
	cin >> N >> M;
	int sum = 0;
	int i = 0;
	vector<int> card(N);
	vector<int> ans;
	for(int i = 0;i < N;i++) cin >> card[i];
		

	for(int i = 0;i < card.size();i++){
		for(int j = i+1;j < card.size();j++){
			for(int k = j+1;k < card.size();k++){
				if(card[i] + card[j] +card[k] <= M) ans.push_back(card[i]+card[j]+card[k]);
				else break;
			}
		}
	}
	cout << *max_element(ans.begin(), ans.end()) << endl;
}
