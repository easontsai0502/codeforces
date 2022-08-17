/*
[Q]https://codeforces.com/group/gRkn7bDfsN/contest/209884/problem/B
[]
*/
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<deque>
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
	if(x || y){
		bool bs;	/*bs=true:下一個數值要比較小，反之*/
		if(backnum>nownum){
			bs=false;
		}else{
			bs=true;
		}
		if(x-1>=0){
			if(numlist[x-1][y]>nownum ^^ bs){
				worklist.push_back({x-1,y});
			}
		}
		if(y-1>=0){
			if(numlist[x-1][y]>nownum ^^ bs){

			}
		}
		if(x+1<n){
			if(numlist[x-1][y]>nownum ^^ bs){

			}
		}
		if(y+1<n){
			if(numlist[x-1][y]>nownum ^^ bs){

			}
		}
	}else{
		worklist.push_back({x+1,y});
		worklist.push_back({x,y+1});
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
	return 0;
}
/*
[I1]
[O1]
*/