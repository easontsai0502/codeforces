/*
[Q]https://codeforces.com/group/gRkn7bDfsN/contest/209884/problem/B
[TLE 8]
[sample ans]http://dreamoon4.blogspot.com/2016/11/13.html
*/
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<deque>
#include<map>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define pii pair<int,int>
int n;
int numlist[1001][1001];
deque<pointer> worklist;
struct pointer{
	int x;
	int y;
	int backx;
	int backy;
};
bool ifer(int x1,int y1,int x2,int y2,int x3,int y3){
	if(numlist[x1][y1]>numlist[x2][y2] && numlist[x3][y3]>numlist[x2][y2]){
		return true;
	}else if(numlist[x1][y1]<numlist[x2][y2] && numlist[x3][y3]<numlist[x2][y2]){
		return true;
	}else{
		return false;
	}
}
bool solve(pointer indata){
	int x=indata.x;
	int y=indata.y;
	if(x==n-1 && y==n-1)return true;
	if(indata.x || indata.y){
		if(x>0){/*x--*/
			if(x-1!=(pointer.backx)){
				if(ifer((pointer.backx),(pointer.backy),x,y,x-1,y)){
					pointer nextpoint;
					nextpoint.x=x-1;
					nextpoint.y=y;
					nextpoint.backx=x;
					nextpoint.backy=y;
					worklist.push_back(nextpoint);
				}
			}
		}
		if(y>0){/*y--*/
			if(y-1!=(pointer.backy)){
				if(ifer((pointer.backx),(pointer.backy),x,y,x,y-1)){
					pointer nextpoint;
					nextpoint.x=x;
					nextpoint.y=y-1;
					nextpoint.backx=x;
					nextpoint.backy=y;
					worklist.push_back(nextpoint);
				}
			}
		}
		if(x<n-1){/*x++*/
			if(x+1!=(pointer.backx)){
				if(ifer((pointer.backx),(pointer.backy),x,y,x+1,y)){
					pointer nextpoint;
					nextpoint.x=x+1;
					nextpoint.y=y;
					nextpoint.backx=x;
					nextpoint.backy=y;
					worklist.push_back(nextpoint);
				}
			}
		}
		if(y<n-1){/*y++*/
			if(y+1!=((pointer.backy))){
				if(ifer((pointer.backx),(pointer.backy),x,y,x,y+1)){
					pointer nextpoint;
					nextpoint.x=x;
					nextpoint.y=y+1;
					nextpoint.backx=x;
					nextpoint.backy=y;
					worklist.push_back(nextpoint);
				}
			}
		}
	}else{
		pointer nextpoint;
		nextpoint.x=1;
		nextpoint.y=0;
		nextpoint.backx=0;
		nextpoint.backy=0;
		worklist.push_back(nextpoint);
		nextpoint.x=0;
		nextpoint.y=1;
		worklist.push_back(nextpoint);
	}
	return false;
}
int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>numlist[i][j];
		}
	}
	int ans=1;
	bool issolve=false;
	solve(0,0);
	ulli maxruntime=n*n;
	while(maxruntime--){
		if(issolve){
			break;
		}
		ans++;
		int needtodo=worklist.size();
		while(needtodo--){
			if(issolve)break;
			int nowx=(worklist.front()).first;
			int nowy=(worklist.front()).second;
			issolve=solve(nowx,nowy);
			worklist.pop_front();
		}
	}
	if(issolve){
		cout<<ans;
	}else{
		cout<<"-1";
	}
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