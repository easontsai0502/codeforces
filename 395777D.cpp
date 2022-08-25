/*
[Q]https://codeforces.com/gym/395777/problem/D
[TLE]
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

/*using namespace*/
using namespace std;

/*define type*/
#define ulli unsigned long long int
#define lli long long int
#define pii pair<int,int>
#define plli pair<lli,lli>
#define pulli pair<ulli,ulli>
#define INT lli
#define UINT unsigned INT

/*struct*/

/*num*/
UINT n;
UINT a[100001];
UINT att[100001];

/*fn*/
bool stob(UINT a,UINT b){
	return a<b;
}

/*main*/
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	cin>>n;
	for(UINT i=0;i<n;i++){
		UINT k;
		cin>>k;
		a[i]=k;
		if(i){
			att[i]=att[i-1]+k;
		}else{
			att[i]=k;
		}
	}
	vector<UINT> cutlist;
	for(int i=0;i<n;i++){
		UINT p;
		cin>>p;
		p--;
		cutlist.push_back(p);
		sort(cutlist.begin(),cutlist.end(),stob);
		UINT ans=0;
		for(int j=0;j<cutlist.size();j++){
			if(cutlist[j]){
				if(j){
					UINT thisnum=att[cutlist[j]-1]-att[cutlist[j-1]];
				}else{
					ans=att[cutlist[j]-1];
				}
			}
		}
		if(cutlist[i]!=n-1){
			ans=max(ans,att[n-1]-att[cutlist[i]]);
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
