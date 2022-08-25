/*
[Q]https://codeforces.com/gym/395777/problem/C
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

/*fn*/
UINT fuc(string str){
	INT n=str.size();
	UINT re=0;
	for(int i=0;i<n;i++){
		re+=int(str[i])-int('0');
	}
	return re;
}
UINT solve(UINT n,vector<UINT> numlist){
	UINT re=0;
	for(int i=0;i<n;i++){
		/*貪心*/
		UINT maxnum=0,maxp=0;
		for(int i=0;i<numlist.size();i++){
			if(numlist[i]>maxnum){
				maxp=i;
				maxnum=numlist[i];
			}
		}
		if(maxnum<10){
			break;
		}else{
			string numstr=to_string(maxnum);
			numlist[maxp]=fuc(numstr);
		}
		/*貪心*/
		/*DFS*/
		/*DFS*/
	}
	{
		for(int i=0;i<numlist.size();i++){
			re=max(re,numlist[i]);
		}
	}
	return re;
}

/*main*/
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	UINT n,k;
	cin>>n>>k;
	vector<UINT> numlist;
	for(int i=0;i<n;i++){
		UINT a;
		cin>>a;
		numlist.push_back(a);
	}
	cout<<solve(k,numlist);
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*
*/
