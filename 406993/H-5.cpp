/*
[zj]		[Q]https://zerojudge.tw/ShowProblem?problemid= [題目編號]
[tioj]	[Q]https://tioj.ck.tp.edu.tw/problems/ [題目編號]
[cses]	[Q]https://cses.fi/problemset/task/ [題目編號]
[cf]		[Q]https://codeforces.com/group/VEc3guEDmO/contest/406993/problem/H
[AC]
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
		for(INT j=ll/i;j<=rr/i;j++){
			if(j*i<ll)continue;
			if(j==k){
				canit=true;
				break;
			}
		}
		if(canit)break;
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
