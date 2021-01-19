#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> p(n);

	for(int i  = 0;i < n;i++)
		cin >> p[i];
	
	sort(p.begin(), p.end());
	int sum = 0;
	for(int i = 0;i < p.size();i++){
		for(int j = 0;j <= i;j++){
			sum += p[j];
		}
	}
	cout << sum << endl;


}
