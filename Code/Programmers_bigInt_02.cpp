#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(string number, int k){
	string answer = "";
	answer = number.substr(k);
	for(int i = k - 1;i >=0;i--){
		int j = 0;
		do{
			if(number[i] >= answer[j]){
				swap(answer[j], number[i]);
				j++;
			}else break;
		}while(1);
	}
	return answer;

}
int main(){
	cout << solution("1231234", 3) << endl;
}
