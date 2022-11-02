/*
[zj]		[Q]https://zerojudge.tw/ShowProblem?problemid= [題目編號]
[tioj]	[Q]https://tioj.ck.tp.edu.tw/problems/ [題目編號]
[cses]	[Q]https://cses.fi/problemset/task/ [題目編號]
[cf]		[Q]https://codeforces.com/group/VEc3guEDmO/contest/406993/problem/G
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
map<char,vector<PII>> keyboardadd;
map<char,bool> cantp;
INT n,m,mxl;
map<char,INT> coin;
/*fn定義*/
char btos(char c){
	c-='A';
	c+='a';
	return c;
}
bool wasbig(char c){
	return ('A'<=c && c<='Z');
}
/*main*/
int main(){
	/*IO加速*/
	if(!debug&&iofast)what_the_fuck;
	/*CIN*/
	cin>>n>>m>>mxl;
	mxl*=mxl;
	for(INT i=0;i<n;i++){
		string str;
		cin>>str;
		for(INT j=0;j<m;j++){
			keyboardadd[str[j]].push_back({i,j});
			cantp[str[j]]=true;
		}
	}
	for(char i='a';i<='z';i++){
		coin[i]=-1;
	}
	int q;
	cin>>q;
	string wanttp;
	cin>>wanttp;
	/*solve*/
	INT ans=0;
	for(INT i=0;i<q;i++){
		char nowtp=wanttp[i];
		//cerr<<nowtp;
		bool bg=wasbig(nowtp);
		if(bg){
			if(keyboardadd['S'].empty()){
				ans=-1;
				break;
			}
			nowtp=btos(nowtp);
		}
		if(!cantp[nowtp]){
			ans=-1;
			break;
		}
		if(bg){
			INT needadd=1;
			if(coin[nowtp]!=-1){
				needadd=coin[nowtp];
			}else{
				for(PII btn:keyboardadd[nowtp]){
					for(PII shf:keyboardadd['S']){
						INT a=abs(btn.first-shf.first);
						INT b=abs(btn.second-shf.second);
						a*=a;
						b*=b;
						//cerr<<a<<","<<b<<endl;
						INT tt=a+b;
						if(tt<=mxl){
							needadd=0;
							break;
						}
					}
				}
				coin[nowtp]=needadd;
			}
			ans+=needadd;
		}
	}
	cout<<ans<<endl;
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/
