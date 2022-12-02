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
const INT mxn=2e5;
INT n,q;
INT lt[mxn+5];
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
	else return lt_find(lt[a]);
}
INT lt_link(INT a,INT b){
	return lt[lt_find(a)]=lt_find(b);
}
bool lt_check(INT oa,INT a,INT b){
	DBG cerr<<oa<<" "<<a<<" "<<b<<endl;
	if(oa<b)return false;
	elif(lt[a]==b)return true;
	elif(a==b)return false;
	elif(lt[a]==a)return false;
	else return lt_check(oa,lt[a],b);
}
/*main*/
int main(){
	/*IO加速*/
	if(!debug&&iofast){what_the_fuck;}
	lt_clear();
	/*CIN*/
	cin>>n;
	for(INT i=1;i<=n;i++){
		INT a;
		cin>>a;
		lt[i]=a;
	}
	/*solve*/
	cin>>q;
	while(q--){
		INT a,b,c;
		cin>>a>>b>>c;
		
		if(lt_check(a,a,c) && lt_check(b,b,c))cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
		DBG{
			for(INT i=1;i<=n;i++){
				cerr<<lt[i]<<" ";
			}
			cerr<<endl;
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
