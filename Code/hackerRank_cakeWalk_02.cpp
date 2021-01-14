#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long marcsCakewalk(vector<int> calorie)
{
    long sum = 0;
    int n;
    cin >> n;
    vector<long> pow({1});
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        calorie.push_back(num);
    }
    sort(calorie.begin(), calorie.end(), greater<>());
    for (int i = 0; i < calorie.size(); i++)
    {
        sum += calorie[i] * pow[i];
	if(i != calorie.size()-1) pow.push_back(pow[i]*2);
        
    }
    return sum;
}
int main()
{
    vector<int> c;
    cout << marcsCakewalk(c) << endl;
}
