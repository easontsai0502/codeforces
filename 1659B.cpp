#include<iostream>
#include<cmath>
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
			for(int j=0;j<n;j++){
				if(i==j)continue;
				if(f[j]=='1')f[j]='0';
				else if(f[j]=='0')f[j]='1';
			}
			dolist[i]++;
		}
		while(run--){
			auto a=f.find('0');
			if(a!=string::npos){
				dolist[a]++;
				f[a]='1';
			}else{
				break;
			}
		}
		run++;
		if(run%2){
			f[n-1]='0';
		}
		dolist[n-1]+=run;


		/*out*/
		cout<<f<<"\n";
		for(int i=0;i<n;i++){
			cout<<dolist[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
