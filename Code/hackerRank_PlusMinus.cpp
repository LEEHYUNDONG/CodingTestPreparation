#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	//data
	int n; cin >> n;
	int number;
	vector<int> num;
	vector<double> proportion;
	proportion.push_back(0);
	proportion.push_back(0);
	proportion.push_back(0);

	for(int i = 0;i < n;i++){
		cin >> number;
		num.push_back(number);
	}
	
	for(int i = 0;i < num.size();i++){
		if(num[i] > 0) proportion[0]++;
		else if(num[i] < 0) proportion[1]++;
		else if(num[i] == 0) proportion[2]++;
	}
	
	proportion[0] = proportion[0]/num.size();	
	proportion[1] = proportion[1]/num.size();	
	proportion[2] = proportion[2]/num.size();	
	

	for(int i = 0;i < 3;i++){
		cout << fixed;
		cout.precision(6);
		cout << proportion[i] << endl;
	}

	return 0;
}
