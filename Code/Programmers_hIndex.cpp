#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	vector<int> cit({3, 0, 6, 1, 5});
	int answer = 0;
	int c1 = 0, c2 = 0;	
	sort(cit.begin(), cit.end());
	answer = cit.size()/2;
	
	for(int i = 0;i < cit.size();i++){
		cout << cit[i] << ' ';
	}
	cout << endl;	
	for(int i = 0;i < cit.size();i++){
		if(cit[i] >= cit[answer]) {c1++;}
		if(cit[i] <= cit[answer]) {c2++;}
		
	}
		
	if(c1 <= cit[answer] && c2 >= cit[answer]) cout << cit[answer] << endl;
	else if(c1 > cit[answer] || c2 < cit[answer]) cout << cit[answer-1] << endl;
	else if(c2 > cit[answer]||c1 < cit[answer]) cout << cit[answer+1] << endl;


	return 0;
}
