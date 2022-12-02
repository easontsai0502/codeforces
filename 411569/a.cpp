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
bool debug=true;
bool iofast=true;
const INT mxn=200000;
INT m,n;
vector<INT> tree[mxn+1];
INT a[mxn+1];
INT lt[mxn+1];
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
	vector<PII> que;
	for(INT i=1;i<=n;i++){
		cin>>a[i];
		que.push_back(mp(a[i],i));
	}
	sort(que.begin(),que.end());
	INT x,y;
	for(INT i=0;i<m;i++){
		cin>>x>>y;
		tree[x].push_back(y);
		tree[y].push_back(x);
		lt_link(x,y);
	}
	/*solve*/
	INT time=n-m-1;
	INT r=n-1;
	INT l=r;
	DBG{
		cerr<<"lt:";
		for(INT i=1;i<=n;i++){
			if(i>1)cerr<<",";
			cerr<<lt[i];
		}
		cerr<<endl;
	}
	while(time--){
		while(true){
			if(r==l)l--;
			elif(l+1==r)l--;
			else{
				if(que[r-1].FIR+que[l].FIR>que[r].FIR+que[l-1].FIR)r--;
				else l--;
			}
			if(lt_check(que[l].SEC,que[r].SEC))continue;
			else{
				cout<<que[l].SEC<<" "<<que[r].SEC;
				lt_link(que[l].SEC,que[r].SEC);
				break;
			}
		}
	}
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/
