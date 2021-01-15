#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int pylons(int k, vector<int> arr){
	int res = 0;
	int i = 0;

	while(i < arr.size()){
		cout << i << endl;	
		bool found = false;	
		for(int l = i+(k-1);(l >= i - k+1) && (l >= 0);l--) {
			if(l < arr.size()){
				if(arr[l] == 1){
					cout << l << " " << k << "\n";
					res++;
					i = l+k;
					found = true;		
					break;
				}
			}
		}	
		if(!found) return -1;
	}

	return res;
}

int main(){
	int n, k; cin >> n >> k;

	vector<int> arr(n, 0);

	for(int i = 0;i < n;i++) cin >> arr[i];

	int res = pylons(k, arr);
	cout << res << '\n';
	

}
