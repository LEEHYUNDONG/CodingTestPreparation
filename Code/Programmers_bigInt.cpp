#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string number, int k){
	string answer = "";
	vector<int> arr;
	string tmp = "";
	int j = 0;
	int max = -1000000;
	for(int i = 0;i < number.length()-k+1;i++){
		tmp.clear();
		for(int j = i+1;j < number.length();j++){

			tmp += number[i];
			tmp += number[j];
			//arr.push_back(stoi(tmp));
			//tmp.clear();
			cout << number[i] << " "; 
			if(tmp.length() != number.length() - k) cout << number[j] << "";
			else {
				tmp.pop_back();
				cout << endl;
			}
		}
	}
	
	//max = *max_element(arr.begin(), arr.end());
	//answer = to_string(max);
	
	return answer;
}
int main(){

	cout << solution("1231234", 3) << endl;
}
