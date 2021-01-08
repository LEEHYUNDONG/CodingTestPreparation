#include <iostream>
#include <vector>
using namespace std;

int main(){
	int cnt = 10;
	int& cntRef = cnt;
	auto a = cntRef;

	cntRef = 11;
	cout << cnt << " ";
	a = 12;
	cout << cnt << endl;
}
