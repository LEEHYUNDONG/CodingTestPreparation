#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
	vector<string> phone_book({"119", "9674223", "1195524421"});
	int index = 0;	
	sort(phone_book.begin(), phone_book.end());
	for(int i = 0;i < phone_book.size()-1;i++){
		index = phone_book[i+1].find(phone_book[i]);
		if(index >= 0) break;
		cout << index << endl;
	}


	return 0;
}
