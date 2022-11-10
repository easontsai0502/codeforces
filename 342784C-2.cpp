/*
[Q]https://codeforces.com/group/iTpKFww7Hn/contest/342784/problem/C
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
	INT q;
	cin>>q;
	while(q--){
		/*CIN*/
		INT n;
		cin>>n;
		PII a[n];
		INT ans[n];
		for(INT i=0;i<n;i++){
			cin>>a[i].first;
			a[i].second=i;;
		}
		/*solve*/
		sort(a,a+n);
		INT it=1;
		INT lastnum=a[0].first;
		for(INT i=0;i<n;i++){
			if(lastnum!=a[i].first){
				lastnum=a[i].first;
				it++;
			}
			ans[a[i].second]=it;
		}
		for(INT i=0;i<n;i++){
			if(i)cout<<" ";
			cout<<ans[i];
		}
		if(q)cout<<endl;
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
