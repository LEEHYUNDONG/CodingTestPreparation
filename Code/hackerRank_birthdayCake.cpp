#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> arr(n, 1);
	for(int i = 0;i < n;i++){
		cin >> arr[i];	
	}
	int max = *max_element(arr.begin(), arr.end());
	int cnt = 0;
	for(auto a:arr) if(max == a) cnt++;
	cout << cnt << endl;
	
}
