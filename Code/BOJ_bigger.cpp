#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define N 50

int height[N] = {0};
int weight[N] = {0};

int main()
{
	int n;
	cin >> n;
	int rank = 1;

	for (int i = 0; i < n; i++)
		cin >> weight[i] >> height[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (weight[i] < weight[j] && height[i] < height[j])
				rank++;
		}
		cout << rank << endl;
		rank = 1;
	}
}
