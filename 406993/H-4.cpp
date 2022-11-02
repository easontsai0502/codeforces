/*
[zj]		[Q]https://zerojudge.tw/ShowProblem?problemid= [題目編號]
[tioj]	[Q]https://tioj.ck.tp.edu.tw/problems/ [題目編號]
[cses]	[Q]https://cses.fi/problemset/task/ [題目編號]
[]
*/
 
/*include*/
#pragma GCC optimize("Ofast")
#pragma GCC optimize("O2")
#pragma GCC optimize("O1")
#pragma GCC optimize("O3")
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<sstream>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>
 
/*using namespace*/
using namespace std;
 
/*define type*/
#define what_the_fuck cin.tie(0);cout.tie(0);ios::sync_with_stdio(false)
#define ULLI unsigned long long int
#define LLI long long int
#define INT int
#define UINT unsigned INT
#define PII pair<INT,INT>
#define PUIUI pair<UINT,UINT>
#define endl "\n"
#define wassomething() empty()==false
 
/*struct*/
struct super_pair{
	INT x1=0;
	INT x2=0;
	INT x3=0;
	INT x4=0;
	INT x5=0;
};
/*fn宣告*/
/*num*/
bool debug=false;
bool iofast=true;
/*fn定義*/
/*main*/
int main(){
	/*IO加速*/
	if(!debug&&iofast)what_the_fuck;
	/*CIN*/
	INT ll,rr,x,y,k;
	cin>>ll>>rr>>x>>y>>k;
	bool canit=false;
	/*solve*/
	for(INT i=x;i<=y;i++){
		INT mxnum=0;
		INT l=ll/i;
		INT r=rr/i;
		l--;
		//r++;
		while(true){
			INT mnt=(l+r)/2;
			INT nownum=mnt;
			if(nownum<ll){
				l++;
				continue;
			}else if(rr<nownum){
				r++;
				continue;
			}
			mxnum=max(mxnum,nownum);
			//cerr<<nownum<<endl;
			if(k==nownum){
				canit=true;
				break;
			}else if(nownum<k){
				l=mnt;
			}else{
				r=mnt;
			}
			if((r-l)<=1)break;
		}
		if(canit)break;
		if(mxnum<k)break;
	}
	if(canit)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
 
/*
[I1]
[O1]
*/
 
/*think*/
/*
 
*/
