#include<iostream>
#include <vector>
#include <algorithm>
#include<cstring>
using namespace std;

int solution(string name){

	int answer = 0; 
	vector<char> nt(name.length(), 'A');
	answer = name.length()-1;
	int l = 0;
	int r = 0;
	for(int i = 0;i < name.length();i++){
		if(name[i] != nt[i]){
			r+=min(name[i]-nt[i], 'Z'-name[i]+1);
			nt[i] = name[i];
			if(i!= name.length()-1 && i!=0)r++;
		}
	}
	for(int i = name.length()-1;i >=0;i--){
		if(name[i] != nt[i]){
			l+=min(name[i]-nt[i], 'Z'-name[i]+1);
			nt[i] = name[i];
			if(i != name.length()-1 && i!=0)l++;
		}
	}
	answer = min(r, l);
	
	
	
	return answer;
}

int main(){
	cout << solution("JAN") << endl; // SAAZA
}
