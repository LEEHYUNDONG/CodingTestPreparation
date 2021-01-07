#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> arr;
	int x;
	for (int i = 0; i < 5; i++)
	{
		cin >> x;
		arr.push_back(x);
	}
	sort(arr.begin(), arr.end());
	int sum1 = 0, sum2 = 0;

	for (int i = 0; i < 4; i++)
		sum1 += arr[i];
	for (int i = 1; i < 5; i++)
		sum2 += arr[i];
	cout << sum1 << ' ' << sum2 << endl;
}
