#include<iostream>
#include<vector>
#include<algorithm>
#define N 15
using namespace std;

int col[N] = {0};
int n, cnt = 0;

bool check(int level){
	for(int i = 0;i < level;i++){
		if(col[i] == col[level]|| abs(col[level]-col[i]) == level - i) return false;
	}
	return true;
}
void nqueen(int x){
	if(x == n) cnt++;
	else{
		for(int i = 0;i < n;i++){
			col[x] = i;
			if(check(x)) nqueen(x+1);
		}
	}
}
int main(){
	cin >> n;
	nqueen(0);
	cout << cnt << endl;

}
