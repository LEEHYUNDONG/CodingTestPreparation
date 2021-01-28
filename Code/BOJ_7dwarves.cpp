#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#define N 9
int main()
{
	int sum = 0;
	int i, j;
	vector<int> df(9);
	int flag = 0;

	for (int i = 0; i < 9; i++)
		cin >> df[i];

	sum = accumulate(df.begin(), df.end(), 0);

	for (i = 0; i < df.size() - 1; i++)
	{
		for (j = i + 1; j < df.size(); j++)
		{
			if (sum - (df[i] + df[j]) == 100)
			{
				df[i] = -1;
				df[j] = -1;
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}

	sort(df.begin(), df.end());
	for (int i = 2; i < df.size(); i++)
		cout << df[i] << endl;
}
