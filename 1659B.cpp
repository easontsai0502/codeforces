#include<iostream>
#incldue<cmath>
#include<vector>
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
		int run=k;
		vector<int> dolist(n,0);
		if(k%2){
			int i;
			for(i=0;i<n;i++){
				if(f[i]=='1')break;
			}
			run--;
			for(int j=0;i<n;i++){
				if(i==j)continue;
				if(f[j]=='1')f[j]='0';
				else if(f[j]=='0')f[j]='1';
			}
			dolist[i]++;
		}
		for(int i=0;i<run;i++){
			
		}
	}
	return 0;
}
