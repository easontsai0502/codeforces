/*
[Q]https://codeforces.com/group/iTpKFww7Hn/contest/342784/problem/B
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
	/*CIN*/
	INT n;
	cin>>n;
	INT a[n];
	INT b[n];
	INT c[n];
	bool wasdo[n];
	for(INT i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i]-i;
		c[i]=a[i]+i;
	}
	/*solve*/
	sort(b,b+n);
	sort(c,c+n);
	INT ans=0;
	for(INT i=0,j;i<n;i=j){
		j=i+1;
		while(j<n&&(b[i]==b[j]))j++;
		INT num=j-i;
		ans+=num*(num-1);
	}
	for(INT i=0,j;i<n;i=j){
		j=i+1;
		while(j<n&&(c[i]==c[j]))j++;
		INT num=j-i;
		ans+=num*(num-1);
	}
	if(debug){
		for(INT i=0;i<n;i++){
			cerr<<b[i]<<" ";
		}
		cerr<<endl;
		for(INT i=0;i<n;i++){
			cerr<<c[i]<<" ";
		}
		cerr<<endl<<endl;
	}
	cout<<ans;
	return 0;
}

/*
[I1]
3
2 1 4
[O1]
4
*/

/*think*/
/*

*/
