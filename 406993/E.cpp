/*
[zj]		[Q]https://zerojudge.tw/ShowProblem?problemid= [題目編號]
[tioj]	[Q]https://tioj.ck.tp.edu.tw/problems/ [題目編號]
[cses]	[Q]https://cses.fi/problemset/task/ [題目編號]
[cf]		[Q]https://codeforces.com/group/VEc3guEDmO/contest/406993/problem/E
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
INT n,m;
const INT maxnm=1e5;
INT dsu[maxnm+1];
INT dsucount[maxnm+1];
vector<INT> larg;
/*fn定義*/
void dsu_re(INT n){//初始化
	for(INT i=1;i<=n;i++){
		dsu[i]=i;
	}
}
INT dsu_find(INT n){//尋找此值的老大
	if(dsu[n]==n)return n;//如果自己就是老大，回報自己
	INT root=dsu_find(dsu[n]);//找尋他的老大
	//dsu[n]=n的爸爸
	dsu[n]=root;//把老大當自己爸爸
	return root;//回報自己ㄉ老大
}
void dsu_insert(INT a,INT b){//將a和b連在一起
	dsu[dsu_find(a)]=dsu_find(b);
	//讓a的老大歸順b的老大
}
bool dsu_get(INT a,INT b){//查詢a和b是否連線
	return dsu_find(a)==dsu_find(b);
}
bool waslucky(INT n){
	string str=to_string(n);
	for(INT i=0;i<str.size();i++){
		if(str[i]!='4' && str[i]!='7')return false;
	}
	return true;
}
INT mnstep=1e5;
/*main*/
int main(){
	/*IO加速*/
	if(!debug&&iofast)what_the_fuck;
	/*CIN*/
	cin>>n>>m;
	dsu_re(n);;
	for(INT i=0;i<m;i++){
		INT a,b;
		cin>>a>>b;
		dsu_insert(a,b);
	}
	/*solve*/
	for(INT i=0;i<n;i++){
		dsucount[dsu[i]]++;
	}
	for(INT i=0;i<n;i++){
		if(dsucount[i])larg.push_back(dsucount[i]);
	}
	INT allrun=0;
	INT p=1;
	for(INT i=0;i<larg.size();i++){
		allrun|=p;
		p<<=1;
	}
	INT minbuild=1e5;
	INT cando=false;
	for(INT i=0;i<=allrun;i++){//2分枚舉
		p=1;
		INT nownum=0;
		INT nowbuild=0;
		INT wantdo=true;
		for(INT j=0;j<larg.size();j++){
			INT nowbit=i&p;
			if(nowbit){
				nownum+=larg[j];
				nowbuild++;
			}
			p<<=1;
			if(cando && nowbuild>=minbuild){
				wantdo=false;
				break;
			}
		}
		if(!wantdo)continue;
		if(waslucky(nownum)){
			cando=true;
			minbuild=min(minbuild,nowbuild);
		}
	}
	if(cando)cout<<minbuild-1;
	else cout<<"-1";
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/
