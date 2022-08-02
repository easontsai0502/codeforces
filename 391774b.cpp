/*
[Q]https://codeforces.com/gym/391774/problem/B
*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
int l[11];
lli solve(int n,int p=0,int can=1){
	if(p==n){
		for(int i=0;i<n;i++){
			cout<<l[i]<<" ";
		}
		cout<<"\n";
		return 1;
	}else{
		lli revalue=0;
		for(int i=1;i<can;i++){
			l[p]=i;
			revalue+=solve(n,p+1,can);
		}
		l[p]=can;
		revalue+=solve(n,p+1,can+1);
		return revalue;
	}
}
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	cout<<solve(n);
	return 0;
}
/*
[I1]
3
[O1]
1 1 1
1 1 2
1 2 1
1 2 2
1 2 3
5
*/