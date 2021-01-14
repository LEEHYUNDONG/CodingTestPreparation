#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long marcsCakewalk(vector<int> calorie)
{
	long sum = 0;
	long pow = 1;
	int n; cin >> n;
        int num;	
	for (int i = 0; i < n; i++){ 
		cin >> num; 
		calorie.push_back(num);
	}
	sort(calorie.begin(), calorie.end(), greater<>());
	for (int i = 0; i < calorie.size(); i++){
		for (int j = 0; j < i; j++){
			pow *= 2;
		}
		sum += calorie[i] * pow;
		pow = 1;
	}
	return sum;
}
int main()
{
	vector<int> c;
	cout << marcsCakewalk(c) << endl;
}
