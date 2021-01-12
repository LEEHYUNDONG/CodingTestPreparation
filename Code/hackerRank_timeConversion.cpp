#include <string>
#include <vector>
#include <iostream>
using namespace std;

string timeConvert(string s){
	string answer = "";
	int len = s.length();

	if(s.find("AM",8) == 8){
	       	if(s[0] == '1'&& s[1] == '2'){ s[0] = '0'; s[1] = '0';}
		answer = s.substr(0, 8);
	}
	else if(s.find("PM", 8) == 8){
	       	if(s[0] == '1' && s[1] == '2')answer = s.substr(0, 8);
		else{
			string h = s.substr(0, 2);
			int hh = stoi(h);
			hh += 12;
			h = to_string(hh);
			s.replace(0, 2, h);
			answer = s.substr(0, 8);

		}
	}
	return answer;	

}

int main(){
	cout << timeConvert("07:05:45PM") << endl;

}
