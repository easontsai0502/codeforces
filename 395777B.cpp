/*
[Q]https://codeforces.com/gym/395777/problem/B
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

/*using namespace*/
using namespace std;

/*define type*/
#define ulli unsigned long long int
#define lli long long int
#define pii pair<int,int>
#define plli pair<lli,lli>
#define pulli pair<ulli,ulli>
#define INT int
#define UINT unsigned INT

/*struct*/

/*num*/

/*fn*/

/*main*/
int main(){
	map<INT,INT> xlist;
	int q;
	cin>>q;
	while(q--){
		int t,x;
		cin>>t>>x;
		if(t==1){
			if(xlist.count(x)){
				xlist[x]++;
			}else{
				xlist[x]=1;
			}
		}else if(t==2){
			if(xlist.count(x)){
				xlist[x]--;
				if(xlist[x]==0){
					xlist.erase(x);
				}
			}
		}else{
			if(xlist.count(x)){
				cout<<xlist[x]<<"\n";
			}else{
				cout<<"0\n";
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
