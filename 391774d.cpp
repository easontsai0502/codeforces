/*
[no AC]
[Q]https://codeforces.com/gym/391774/problem/D
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
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	lli ans=0;
	/*
	for(int i=0;i<n;i++){
		int k=i+2;
		for(int j=i+1;j<n;j++){
			k=max(j+1,k);
			for(k=j+1;k<n;k++){
				if(a[j]-a[i]>a[k]-a[j]){
					cout<<i<<" "<<j<<" "<<k<<"\n";
					ans++;
				}
			}
		}
	}
	cout<<ans<<"\n";*/
	/************************************************************************************/
	ans=0;
	for(int i=0;i<n;i++){
		int k=i+1;
		for(int j=i+1;j<n;j++){
			if(k<j){
			    k=j+1;
			}
			while(k<n){
				if(a[j]-a[i]>a[k]-a[j]){
					k++;
				}else{
				    break;
				}
			}
			ans+=max(0,k-j-1);
		}
	}
	cout<<ans;
	return 0;
}
/*
[I1]
4
1 5 7 8
[O1]
4
[I2]
5
1 2 3 4 5
[O2]
3
[I3]
4
1 2 2 2
[O3]
3
*/