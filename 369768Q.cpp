#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n],tot=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		tot+=a[i];
	}
	tot/=n;
	unsigned long long int ans=0;
	for(int i=0;i<n;i++){
		if(a[i]<tot){
			int needadd=tot-a[i];
			for(int k=1;k<=n/2;k++){
				int j=(i+k)%n;
				needadd=tot-a[i];
				if(a[j]>tot){
					int cangive=a[j]-tot;
					a[i]+=min(tot,cangive);
					a[j]-=min(tot,cangive);
					ans+=k*min(tot,cangive);
				}
				if(a[i]==tot){break;}
			}
		}
		if(a[i]>tot){
			int needadd=a[i]-tot;
			for(int k=1;k<=n/2;k++){
				int j=(i+k)%n;
				needadd=a[i]-tot;
				if(a[j]<tot){
					int cangive=tot-a[j];
					a[i]-=min(tot,cangive);
					a[j]+=min(tot,cangive);
					ans+=k*min(tot,cangive);
				}
				if(a[i]==tot){break;}
			}
		}
	}
	
	
	
	cout<<ans;
	return 0;
}
