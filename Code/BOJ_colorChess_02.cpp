#include<iostream>
#include<string>
#include<algorithm>
#include<utility>
#define N 50

using namespace std;

string Wfirst[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};
string Bfirst[8] = {

	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};

string chess[N];

int Wb_cnt(int x, int y){
	int cnt = 0;
	for(int i = 0;i < 8;i++){
		for(int j = 0;j < 8;j++){
			if(chess[x+i][y+j] != Wfirst[i][j]) cnt++;
		}
	}
	return cnt;
}

int Bw_cnt(int x, int y){
	int cnt = 0;
	for(int i = 0;i < 8;i++){
		for(int j = 0;j < 8;j++){
			if(chess[x+i][y+j] != Bfirst[i][j]) cnt++;
		}
	}
	return cnt;
}

int main(){
	int size[2];
	int cnt;
	int minV = 1000000;
	
	int n, m; cin >> n >> m;
	for(int i = 0;i < n;i++) cin >> chess[i];
	
	for(int i = 0;i+8 <=n;i++){
		for(int j = 0;j + 8 <= m;j++){
			int tmp = min(Wb_cnt(i ,j), Bw_cnt(i ,j));
			if(tmp < minV){
				minV = tmp;
			}
		}
	}
	cout << minV << endl;
}

	
