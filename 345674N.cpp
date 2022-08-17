/*
[Q]https://codeforces.com/group/iTpKFww7Hn/contest/345674/problem/N
[]
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
#define pii pair<int,int>
int chentoi[100001];
map<int,vector<int> > inin;
map<pii,int> wl;
int psscount[4];
int pssr(int a,int b){/*猜拳結果機*/
	/*
	[a,b]
	1=剪刀
	2=石頭
	3=不～
	[return]
	-1=a輸
	1=a贏
	0=a平
	*/
	/*a=1*/
	if(a==1){
		if(b==1)return 0;
		if(b==2)return -1;
		if(b==3)return 1;
	}
	/*a=2*/
	if(a==2){
		if(b==1)return 1;
		if(b==2)return 0;
		if(b==3)return -1;
	}
	/*a=3*/
	if(a==3){
		if(b==1)return -1;
		if(b==2)return 1;
		if(b==3)return 0;
	}
}
int pss(int a,int re){/*猜拳製造機*/
	/*
	[a,return]
	1=剪刀
	2=石頭
	3=不～
	[re]
	-1=a輸
	1=a贏
	0=a平
	*/
	/*a=1*/
	if(re==1){
		if(a==1)return 3;
		if(a==2)return 1;
		if(a==3)return 2;
	}
	if(re==-1){
		if(a==1)return 2;
		if(a==2)return 3;
		if(a==3)return 1;
	}
	if(re==0){
		return a;
	}
}
bool solve(int p,int ou){
	chentoi[p]=ou;
	psscount[ou]++;
	bool re=true;
	for(int i:inin[p]){
		if(re){
			if(chentoi[i]){
				if(pssr(chentoi[p],chentoi[i])!=wl[{p,i}]){
					return false;
				}
			}else{
				solve(i,pss(ou,wl[{p,i}]));
			}
		}
		else{
			break;
		}
	}
	return re;
}
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
    int n,m;
	cin>>n>>m;
	bool cansolve=true;
	while(m--){
		int a,b,c;
		cin>>a>>b>>c;
		if(count(inin[a].begin(),inin[a].end(),b)){
			if(wl[{a,b}]!=c){
				cansolve=false;
				break;
			}
		}
		inin[a].push_back(b);
		inin[b].push_back(a);
		wl[{a,b}]=c;
		wl[{b,a}]=-c;
	}
	for(int i=0;i<n && cansolve;i++){
		if(chentoi[i]){
			continue;
		}else{
			cansolve=solve(i,1);
		}
	}
	if(cansolve){
		cout<<min(psscount[1],min(psscount[2],psscount[3]));
	}else{
		cout<<"-1";
	}
	return 0;
}
/*
[I1]
2 3
1 2 -1
1 2 0
1 2 1
[O1]
-1
[I2]
6 5
1 2 1
2 3 0
2 4 1
2 5 1
6 2 -1
[O2]
1
[I3]
5 1
1 2 0
[O3]
0
*/