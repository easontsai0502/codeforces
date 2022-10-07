/*
[Q]
[]
*/

/*include*/
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
#include<stack>
#include<cstring>
#include<unordered_map>

/*using namespace*/
using namespace std;

/*define type*/
#define ULLI unsigned long long int
#define LLI long long int
#define INT int
#define UINT unsigned INT
#define PII pair<INT,INT>
#define PUIUI pair<UINT,UINT>

/*struct*/

/*fn宣告*/

/*num*/

/*fn定義*/

/*main*/
int main(){
	{/*IO加速*/
		cin.tie(0);
		cout.tie(0);
		ios::sync_with_stdio(false);
	}
	INT n,q;
	cin>>n>>q;
	vector<PII> road;
	PII orig;
	orig.first=0;
	orig.second=0;
	road.push_back(orig);
	INT a[n+1],b[n+1];
	for(INT i=1;i<=n;i++){
		cin>>a[i];
	}
	for(INT i=1;i<=n;i++){
		cin>>b[i];
	}
	for(INT i=1;i<=n;i++){
		orig.first=a[i];
		orig.second=b[i];
		road.push_back(orig);
	}
	sort(road.begin(),road.end());
	INT roadlong[n+1];
	INT getcandy[n+1];
	for(INT i=1;i<=n;i++){
		roadlong[i]=roadlong[i-1]+road[i].first;
		getcandy[i]=getcandy[i-1]+road[i].second;
	}
	while(q--){
		INT x;
		cin>>x;
		INT i=0;
		INT ans=0;
		for(INT j=1;j<=n;j++){
			while(i<j && roadlong[j]-roadlong[i]<=x)i++;
			ans=max(ans,getcandy[j]-getcandy[i]);
		}
		cout<<ans<<"\n";
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
