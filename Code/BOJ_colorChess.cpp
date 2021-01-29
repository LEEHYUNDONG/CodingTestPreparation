#include<iostream>
#include<string>
#include<vector>
using namespace std;

#define N 50

char chessB[N][N] = {0};

int main(){
	int n, m;
	cin >> n >> m;
	int cnt = 0;

	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			cin >> chessB[i][j];
		}
	}

	for(int i = 0;i < n;i++){ // 행
		for(int j = 0;j < m-2;j++){ //열
			if(chessB[i][j] != chessB[i][j+2] &&chessB[i][j]==chessB[i][j+1]) cnt++;
		}
	}

	cout << cnt << endl;
}
