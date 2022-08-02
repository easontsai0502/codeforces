/*
[Q]https://codeforces.com/group/m7tZBvb5sH/contest/369768/problem/Q
*/
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
	int findmax=n/2;
	unsigned long long int ans=0;
	for(int i=0;i<n;i++){
		if(a[i]<tot){//此數較小
			int needadd=tot-a[i];
			for(int k=1;k<=n/2;k++){
				needadd=tot-a[i];//a[i]最多可以+-多少
				//正走
				int j=(i+k)%n;
				int cangive=a[j]-tot;//a[j]最多可以+-多少
				cangive=min(needadd,cangive);
				//反走
				j=(i-k+n)%n;
				int cangivesmall=a[j]-tot;
				cangivesmall=min(needadd,cangivesmall);
				
				if(cangive>cangivesmall){//正走大就選正走
			    	j=(i+k)%n;
				    if(a[j]>tot){
				    	cangive=a[j]-tot;
				    	a[i]+=min(needadd,cangive);
				    	a[j]-=min(needadd,cangive);
				    	ans+=k*min(needadd,cangive);
				    }
				}else{//否則凡走...過必留痕跡
				    j=(i-k+n)%n;
				    if(a[j]>tot){
				    	cangive=a[j]-tot;
				    	a[i]+=min(needadd,cangive);
				    	a[j]-=min(needadd,cangive);
				    	ans+=k*min(needadd,cangive);
				    }
				    
				}
				
				if(a[i]==tot){break;}
			}
		}else if(a[i]>tot){//此數較大
			int needadd=a[i]-tot;
			for(int k=1;k<=n/2;k++){
				needadd=a[i]-tot;//a[i]最多可以+-多少
				//正走
				int j=(i+k)%n;
				int cangive=tot-a[j];//a[j]最多可以+-多少
				cangive=min(needadd,cangive);
				//反走
				j=(i-k+n)%n;
				int cangivesmall=tot-a[j];
				cangivesmall=min(needadd,cangivesmall);
				
				if(cangive>cangivesmall){//正走大就選正走
			    	j=(i+k)%n;
				    if(a[j]>tot){
				    	cangive=tot-a[j];
				    	a[i]-=min(needadd,cangive);
				    	a[j]+=min(needadd,cangive);
				    	ans+=k*min(needadd,cangive);
				    }
				}else{//否則凡走...過必留痕跡
				    j=(i-k+n)%n;
				    if(a[j]>tot){
				    	cangive=a[j]-tot;
				    	a[i]-=min(needadd,cangive);
				    	a[j]+=min(needadd,cangive);
				    	ans+=k*min(needadd,cangive);
				    }
				    
				}
				
				if(a[i]==tot){break;}
			}
		}
	}
	
	
	
	cout<<ans;
	return 0;
}
/*
[I1]
7
2 1 2 2 2 3 2
[O1]
3
[I2]
8
1000000 1000000 1000000 1000000 0 0 0 0
[O2]
4000000
*/
