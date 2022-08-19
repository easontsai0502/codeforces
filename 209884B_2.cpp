/*
[Q]https://codeforces.com/group/gRkn7bDfsN/contest/209884/problem/B
[]
[sample ans]http://dreamoon4.blogspot.com/2016/11/13.html
*/

/*include*/
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<deque>
#include<map>

using namespace std;

/*define*/
#define lli long long int
#define ulli unsigned long long int
#define pii pair<int,int>

/*struct*/
struct taskebar{
	int x;
	int y;
	int arr;
};

/*num*/
const int maxn=100000
int step[maxn+1][maxn+1][2];
int movex={0,1,0,-1};
int movey={1,0,-1,0};
int n;
int mapnum[maxn+1][maxn+1];

/*fn*/
bool out(int x,int y){return (x<0 || y<0 || x>=n || y>=n);}

/*定義*/
/*
arr=0:下一個要比較大
arr=1:下一個要比較小
*/

/*main*/
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>mapnum[i][j];
		}
	}
	deque<taskebar>worklist;
	taskebar st;
	/*新增第一個工作*/
	st.x=0;
	st.y=0;
	st.arr=0;
	worklist.push_back(st);
	st.arr=1;
	worklist.push_back(st);
	step[0][0][0]=1;
	step[0][0][1]=1;
	while(worklist.size()){
		taskebar thistask=worklist.front();
		worklist.pop();
		int tx=thistask.x;
		int ty=thistask.y;
		int tarr=thistask.arr;
		if(tx==n-1 && ty==n-1){
			cout<<step[tx][ty][tarr];
			return 0;
		}
		for(int i=0;i<4;i++){
			int nx=x+movex[i];
			int ny=y+movey[i];
			if(out(nx,ny))continue;
			if(mapnum[nx][ny]>mapnum[x][y] && (tarr-1)){
				if(step[nx][ny][1])continue;
				step[nx][ny][1]=step[tx][ty][0]+1;
			}else if(mapnum[nx][ny]<mapnum[x][y] && (tarr)){
				if(step[nx][ny][0])continue;
				step[nx][ny][0]=step[tx][ty][1]+1;
			}
		}
	}
	cout<<"-1";
	return 0;
}

/*
[I1]
2
3 4
7 5
[O1]
3
[I2]
3
15 16 18
13 11 9
2 7 3
[O2]
7
*/