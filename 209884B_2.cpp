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
const int maxn=1000;
int step[maxn+1][maxn+1][2];
const int movex[]={0,1,0,-1};
const int movey[]={1,0,-1,0};
int n;
int mapnum[maxn+1][maxn+1];

/*fn*/

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
	int ans=-1;
	while(worklist.size()){
		taskebar thistask=worklist.front();
		worklist.pop_front();
		int tx=thistask.x;
		int ty=thistask.y;
		int tarr=thistask.arr;
		if(tx==n-1 && ty==n-1){
			ans=step[tx][ty][tarr];
			break;
		}
		for(int i=0;i<4;i++){
			int nx=tx+movex[i];
			int ny=ty+movey[i];
			if(nx<0 || ny<0 || nx>=n || ny>=n)continue;
			if(mapnum[nx][ny]>mapnum[tx][ty] && (tarr-1)){
				if(step[nx][ny][1])continue;
				step[nx][ny][1]=step[tx][ty][0]+1;
				taskebar nexttask;
				nexttask.x=nx;
				nexttask.y=ny;
				nexttask.arr=1;
				worklist.push_back(nexttask);
			}else if(mapnum[nx][ny]<mapnum[tx][ty] && (tarr)){
				if(step[nx][ny][0])continue;
				step[nx][ny][0]=step[tx][ty][1]+1;
				taskebar nexttask;
				nexttask.x=nx;
				nexttask.y=ny;
				nexttask.arr=0;
				worklist.push_back(nexttask);
			}
		}
	}
	cout<<ans;
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