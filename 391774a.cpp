/*
[Q]https://codeforces.com/gym/391774/problem/0
*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	lli n,k;
	cin>>n>>k;
	lli num[n];
	for(lli i=0;i<n;i++){
		cin>>num[i];
	}
	sort(num,num+n);
	lli ans=0,lef=0,rig=n-1;
	for(lli i=0;i<k;i++){
		lli a=num[lef]*num[lef+1],b=num[rig]*num[rig-1];
		if(a>b){
			ans+=a;
			lef+=2;
		}else{
			ans+=b;
			rig-=2;
		}
	}
	cout<<ans;
	return 0;
}
/*
[I1]
6 3
-1 -2 -3 1 2 3
[O1]
11
[I2]
6 2
-1 -2 -3 1 2 3
[O2]
12
[I3]
5 2
10 8 2 -1 -1
[O3]
81
[I4]
2 1
-1000000 1000000
[O4]
-1000000000000
*/