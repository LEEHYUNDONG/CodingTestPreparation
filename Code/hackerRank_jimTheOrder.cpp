#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(const vector<int>& a, const vector <int>& b){
	return a[1] < b[1];
}
vector<int> jimOrders(vector<vector <int>> orders){
	vector<vector<int>> seq;
	vector<int> res;
	for(int i = 0;i < orders.size();i++){
		seq.push_back({i+1, orders[i][0]+orders[i][1]});
	}
	sort(seq.begin(), seq.end(), compare);
	cout << '\n'<< '\n' << '\n' << '\n';
	for(int i = 0;i < seq.size();i++){
		for(int j = 0;j < seq[0].size();j++){
			cout << seq[i][j] << " ";
		}
		cout << '\n';
	}	
	for(int i = 0;i < seq.size();i++) res.push_back(seq[i][0]);
	return res;
}
int main(){
	int n; cin >> n;
	vector<vector <int>> orders(n);
	for(int i = 0;i < n;i++){
		orders[i].resize(2);
		for(int j = 0;j < 2;j++){
			cin >> orders[i][j];
		}
	}
	vector<int> res = jimOrders(orders);

	for(int i = 0;i < res.size();i++){
		cout << res[i] << " ";
	}
	cout << '\n';

}
