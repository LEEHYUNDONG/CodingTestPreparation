#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int solution(string name)
{
	int len = name.length(), mid = len / 2;
	int front = 0, back = 0;
	int half_f = 0, half_b = 0;
	int answer = 0;

	answer = name[0] - 'A';
	if (answer > 13)
		answer = 'Z' - name[0] + 1;
	for (int i = 1; i < name.length(); i++){
		if (name[i] <= 'N') answer += name[i] - 'A';
		else answer += 'Z' - name[i] + 1;

		if (name[i] != 'A'){
			front = i;
			if (i <= mid) half_f = i;
		}
		if (name[len - i] != 'A'){
			back = i;
			if (len - i > mid) half_b = i;
		}
	}
	answer += min(min(front, back), min(half_b * 2 + half_f, half_f * 2 + half_b));

	return answer;
}
int main()
{
	cout << solution("JAN") << endl;

	return 0;
}
