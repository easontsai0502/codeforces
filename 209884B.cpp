/*
[Q]https://codeforces.com/group/gRkn7bDfsN/contest/209884/problem/B
[]
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
void solve(int x=0,int y=0){
	int backx=come[{x,y}].first;
	int backy=come[{x,y}].second;
	int nownum=numlist[x][y];
	int backnum=numlist[backx][backy];
	if((x || y)){
		bool bs;	/*bs=true:下一個數值要比較小，反之*/
		if(backnum>nownum){
			bs=false;
		}else{
			bs=true;
		}
		if(x-1>=0 && x-1!=backx){
			if(numlist[x-1][y]>nownum ^ bs){
				worklist.push_back({x-1,y});
				come[{x-1,y}]={x,y};
			}
		}
		if(y-1>=0 && y-1!=backy){
			if(numlist[x-1][y]>nownum ^ bs){
				worklist.push_back({x,y-1});
				come[{x,y-1}]={x,y};
			}
		}
		if(x+1<n && x+1!=backx){
			if(numlist[x-1][y]>nownum ^ bs){
				worklist.push_back({x+1,y});
				come[{x+1,y}]={x,y};
			}
		}
		if(y+1<n && y+1!=backy){
			if(numlist[x-1][y]>nownum ^ bs){
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
	for(int i=0;i<n*n;i++){
		if(issolve){
			break;
		}
		ans++;
		int needtodo=worklist.size();
		while(needtodo--){
			int nowx=(worklist.front()).first;
			int nowy=(worklist.front()).second;
			if(nowx==n-1 && nowy==n-1){
				issolve=true;
				break;
			}
			solve(nowx,nowy);
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
[O1]
*/