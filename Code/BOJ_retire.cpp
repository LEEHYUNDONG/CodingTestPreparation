#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	vector<vector<int>> tp(n, vector<int>(2, 0));
	//input data
	for(int i = 0;i < n;i++){
		for(int j = 0;j < 2;j++){
			cin >> tp[i][j];
		}
	}
	//algorithm
	int i = 0, sum = 0; // cursor
	while(i < n){
		int cost = tp[i][1];
		int time = tp[i][0];
		cout << "i :" << i << endl;
		cout << "Data :" << tp[i][0] << "  " << tp[i][1] << endl;
		for(int j = tp[i][0]-1;j >= 0;j--){
			if(time == 1){
				i++;
				break;
			}
			if(cost < tp[j][1] && time > tp[j][0]){
				cout << "Max :" << cost << endl;
				cost = tp[j][1];
				i = j;
				cout << "i : "<< i << endl;
			}
			else i = tp[j][1];
		}
		sum += cost;
		cout << sum << endl;
	}
	cout << sum << endl;
}
