#include<iostream>
#include<algorithm>
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
		int n,k;
		cin>>n>>k;
		string f;
		cin>>f;
		if(k%2){
			int i;
			for(i=0;i<n;i++){
				if(f[i]=='1')break;
			}
		}
	}
	return 0;
}
