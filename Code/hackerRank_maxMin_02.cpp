#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxMin(int k, vector<int> arr){
	vector<int> unfair;
	int mi = *max_element(arr.begin(), arr.end());
	sort(arr.begin(), arr.end());
	for(int i = 0;i < arr.size()-k;i++){
		mi = min(mi, arr.begin()+k+i);
	}
	return mi;
}

int main(){
	int n, k; cin >> n >> k;
	vector<int> arr(n);
	for(int i = 0;i < n;i++){
		cin >> arr[i];
	}
	cout << maxMin(k, arr) << endl;

}
