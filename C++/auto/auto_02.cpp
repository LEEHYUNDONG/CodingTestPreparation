#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v({1, 2, 3, 4, 5});
	for(auto& a:v) a *= 2;
	for(auto& a:v) cout << a << endl; // iterator와 같은 효과를 볼수 있다.
		
}
