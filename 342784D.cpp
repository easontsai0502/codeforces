/*
[Q]https://codeforces.com/group/iTpKFww7Hn/contest/342784/problem/D
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	unsigned long long int ans=0;
	for(int i=0;i<n;i++){
		int k=i+2;
		for(int j=i+1;j+1<n;j++){
			while(k<n && a[i]+a[j]>a[k]){k++;}
			ans+=k-j-1;
		}
	}
	cout<<ans;
	return 0;
}
/*
[I1]
4
3 4 2 1
[O1]
1
[I2]
3
1 1000 1
[O2]
0
[I3]
7
218 786 704 233 645 728 389
[O3]
23
*/