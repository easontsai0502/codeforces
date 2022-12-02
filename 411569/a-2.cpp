/*
[Q]
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
#define INT LLI
#define UINT unsigned INT
#define PII pair<INT,INT>
#define PUIUI pair<UINT,UINT>
#define endl "\n"
#define DBG if(debug)
#define FIR first
#define SEC second
#define elif else if
#define CIN( nn ) DBG{cout<<"input:"<<endl;}cin >> nn ;
#define COUT( nn ) DBG{cout<<"output:{";}cout << nn ; DBG{cout<<"}"<<endl;}

/*struct*/
/*fn宣告*/
/*num*/
bool debug=false;
bool iofast=true;
const INT mxn=200000;
INT m,n;
vector<INT> tree[mxn+1];
INT a[mxn+1];
INT lt[mxn+1];
INT mx[mxn+1];
INT mxp=0;
INT mxnum=0;
/*fn定義*/
PII mp(INT first,INT second){
	PII a={first,second};
	return a;
}
void lt_clear(){
	for(INT i=0;i<size(lt);i++){
		lt[i]=i;
	}
}
INT lt_find(INT a){
	if(lt[a]==a)return a;
	else return lt[a]=lt_find(lt[a]);
}
INT lt_link(INT a,INT b){
	return lt[lt_find(a)]=lt_find(b);
}
bool lt_check(INT a,INT b){
	return lt_find(a)==lt_find(b);
}
/*main*/
int main(){
	/*IO加速*/
	if(!debug&&iofast){what_the_fuck;}
	/*re:0*/
	lt_clear();
	/*CIN*/
	cin>>n>>m;
	for(INT i=1;i<=n;i++){
		cin>>a[i];
		mxnum=max(mxnum,a[i]);
	}
	INT x,y;
	for(INT i=0;i<m;i++){
		cin>>x>>y;
		tree[x].push_back(y);
		tree[y].push_back(x);
		lt_link(x,y);
	}
	/*solve*/
	for(INT i=1;i<=n;i++){
		INT ltf=lt_find(i);
		mx[ltf]=max(mx[ltf],a[i]);
	}
	INT ans=0-mxnum;
	for(INT i=1;i<=n;i++){
		ans+=mx[i];
	}
	ans+=mxnum*(n-m-1);
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
