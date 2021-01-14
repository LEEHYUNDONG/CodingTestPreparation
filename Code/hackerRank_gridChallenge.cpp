#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

string gridChallenge(vector<string> grid){

	int n; cin >> n; //the number of testcases
	while(n > 0){
		int flag = 0;
		int rc; cin >> rc;
		grid.resize(rc);
		for(int i = 0;i < rc;i++){
			cin >> grid[i];
		}
		for(int i = 0;i < rc;i++) sort(grid[i].begin(), grid[i].end());
		for(int i = 0;i < rc;i++){
			for(int j = 0;j < rc-1;j++){
				if(grid[j][i] > grid[j+1][i]) flag = 1;
			}
		}
		if(flag == 1) cout << "NO\n";
		else cout << "YES\n";
		n--;
	}

	/*	
	for(int i = 0;i < grid.size();i++){
		for(int j = 0;j < grid[0].size();j++){
			cout << grid[i][j] << " ";
		}
		cout << '\n';
	}*/
	return "0";
}

int main(){
	vector<string>s;
	cout << gridChallenge(s) << endl;

}
