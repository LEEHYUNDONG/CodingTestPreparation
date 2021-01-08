#include <vector>
#include <string>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
	int answer = 0;
	vector<int> s(n, 1);
	for (auto a : reserve)
		s[a - 1]++;
	for (auto a : lost)
		s[a - 1]--;

	for (int i = 0; i < s.size(); i++)
	{
		if (i != 0 && s[i] == 0)
		{
			if (s[i - 1] == 2)
			{
				s[i]++;
				s[i - 1]--;
				continue;
			}
		}
		if (i != s.size() - 1 && s[i] == 0)
		{
			if (s[i + 1] == 2)
			{
				s[i]++;
				s[i + 1]--;
			}
		}
	}
	for (auto a : s)
		a > 0 ? answer++ : 0;

	return answer;
}
