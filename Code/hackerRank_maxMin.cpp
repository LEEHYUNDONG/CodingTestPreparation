#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxMin(int k, vector<int> arr){
	int ma = 0, mi = 0;
	vector<int> unfair;
	sort(arr.begin(), arr.end());
	for(int i = 0;i < arr.size()-k;i++){
		ma = *max_element(arr.begin()+i, arr.begin()+k+i);
		mi = *min_element(arr.begin()+i, arr.begin()+k+i);
		unfair.push_back(ma-mi);
	}
	
	return *min_element(unfair.begin(), unfair.end());
}

int main(){
	int n, k; cin >> n >> k;
	vector<int> arr(n);
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	cout << maxMin(k, arr) << endl;

}
