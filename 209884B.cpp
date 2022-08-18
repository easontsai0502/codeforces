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
map<pii,pii> come;
deque<pii> worklist;
struct pointer{
	int x;
	int y;
	int am; /*如果*/
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
bool solve(int x=0,int y=0){
	if(x==n-1 && y==n-1)return true;
	int backx=come[{x,y}].first;
	int backy=come[{x,y}].second;
	int nownum=numlist[x][y];
	int backnum=numlist[backx][backy];
	if((x || y)){
		if(x-1>=0 && x-1!=backx){//left
			if(ifer(backx,backy,x,y,x-1,y)){
				worklist.push_back({x-1,y});
				come[{x-1,y}]={x,y};
			}
		}
		if(y-1>=0 && y-1!=backy){//up
			if(ifer(backx,backy,x,y,x,y-1)){
				worklist.push_back({x,y-1});
				come[{x,y-1}]={x,y};
			}
		}
		if(x+1<n && x+1!=backx){//rig
			if(ifer(backx,backy,x,y,x+1,y)){
				worklist.push_back({x+1,y});
				come[{x+1,y}]={x,y};
			}
		}
		if(y+1<n && y+1!=backy){//dow
			if(ifer(backx,backy,x,y,x,y+1)){
				worklist.push_back({x,y+1});
				come[{x,y+1}]={x,y};
			}
		}
	}else{
		worklist.push_back({x+1,y});
		worklist.push_back({x,y+1});
		come[{x+1,y}]={0,0};
		come[{x,y+1}]={0,0};
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
	while(true){
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