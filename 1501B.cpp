/*
[Q]https://codeforces.com/problemset/problem/1501/B
[AC]
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],bake[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			bake[i]=0;
		}
		int fire=0;
		for(int i=n-1;i>=0;i--){
			fire=max(a[i],fire);
			if(fire){
				fire--;
				bake[i]++;
			}
		}
		for(int i=0;i<n;i++){
			cout<<bake[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
/*
[I1]
3
6
0 3 0 0 1 3
10
0 0 0 1 0 5 0 0 0 2
3
0 0 0
[O1]
1 1 0 1 1 1 
0 1 1 1 1 1 0 0 1 1 
0 0 0 
*/