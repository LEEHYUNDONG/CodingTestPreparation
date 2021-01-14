#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string number, int k){
	string answer = "";
	int start = 0;

	for(int i = 0;i < number.size()-k;i++){
		char max = number[start];
		int mxIdx = start;	
		for(int j = start;j <= k+i;j++){
			if(max < number[j]){
			       	max = number[j];
				mxIdx = j;
			}
		}
		start = mxIdx + 1;
		answer += max;
	}
	
	return answer;
}
int main(){

	cout << solution("1231234", 3) << endl;
}
