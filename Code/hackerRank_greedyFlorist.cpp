#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int getMinimumCost(int k, vector<int> c){
	int min = 0;
	int p = 0;
	if(k == c.size()) return accumulate(c.begin(), c.end(), 0);
	sort(c.begin(), c.end(), greater<>());
	for(int i = 0;i < c.size();i++){
		int l = 0;
		if(i % k == 0) p++;
		min += c[i]*p;
		cout << i << " "<< p << endl;
			
	}
	return min;
}

int main(){
	int n, k; cin >> n; cin >> k;
	vector<int> cost(n);
	for(int i = 0;i < n;i++){cin >>cost[i];}
	//for(auto a:cost) cout << a << endl;
	cout << getMinimumCost(k, cost) << endl;
	

}
