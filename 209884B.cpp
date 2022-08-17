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
bool ifer(int x1,int y1,int x2,int y2,int x3,int y3){
	if(numlist[x1][y1]>numlist[x2][y2] && numlist[x3][y3]>numlist[x2][y2]){
		return true;
	}else if(numlist[x1][y1]<numlist[x2][y2] && numlist[x3][y3]<numlist[x2][y2]){
		return true;
	}else{
		return false;
	}
}
void solve(int x=0,int y=0){
	int backx=come[{x,y}].first;
	int backy=come[{x,y}].second;
	int nownum=numlist[x][y];
	int backnum=numlist[backx][backy];
	if((x || y)){
		int bs=1;	/*bs=1:下一個數值要比較小，反之*/
		if(backnum>nownum){
			bs=0;
		}else

		if(x-1>=0 && x-1!=backx){
			int nextbs=1;
			if(numlist[x-1][y]>nownum){
				bs=0;
			}
			if(nextbs==bs){
				worklist.push_back({x-1,y});
				come[{x-1,y}]={x,y};
			}
		}

		if(y-1>=0 && y-1!=backy){
			int nextbs=1;
			if(numlist[x][y-1]>nownum){
				bs=0;
			}
			if(nextbs==bs){
				worklist.push_back({x,y-1});
				come[{x,y-1}]={x,y};
			}
		}

		if(x+1<n && x+1!=backx){
			int nextbs=1;
			if(numlist[x+1][y]>nownum){
				bs=0;
			}
			if(nextbs==bs){
				worklist.push_back({x+1,y});
				come[{x+1,y}]={x,y};
			}
		}

		if(y+1<n && y+1!=backy){
			int nextbs=1;
			if(numlist[x][y+1]>nownum){
				bs=0;
			}
			if(nextbs==bs){
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
	/*debug*/cout<<"0,0\n===========\n";
	for(int i=0;i<n*n;i++){
		if(issolve){
			break;
		}
		ans++;
		int needtodo=worklist.size();
		while(needtodo--){
			int nowx=(worklist.front()).first;
			int nowy=(worklist.front()).second;
			/*debug*/cout<<nowx<<','<<nowy<<"\n";
			if(nowx==n-1 && nowy==n-1){
				issolve=true;
				break;
			}
			solve(nowx,nowy);
			worklist.pop_front();
		}
		/*debug*/cout<<"=================\n";
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