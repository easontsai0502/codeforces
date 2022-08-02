/*
[no summit]
[Q]https://codeforces.com/gym/391774/problem/C
*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
bool gg(ulli a,ulli b){
	return a>b;
	//return a<b;
}
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	ulli q;
	cin>>q;
	while(q--){
		ulli n,k;
		cin>>n>>k;
		ulli a[k];
		for(int i=0;i<k;i++){
			cin>>a[i];
		}
		sort(a,a+k,gg);
		ulli ans=0;
		for(int i=0;i<k;i++){
			ulli thisatk=n*a[i];
			thisatk/=100;
			ulli o=thisatk*100;
			o/=a[i];
			if(o<n){
				thisatk++;
			}
			int j;
			ulli nextatk;
			for(j=i+1;j<k;j++){
				nextatk=n*a[i];
				nextatk/=100;
				ulli nexto=thisatk*100;
				nexto/=a[i];
				if(nexto<n){
					nextatk++;
				}
				if(nextatk<thisatk){
					break;
				}
			}
			if(j==i+1){
				ans+=thisatk;
				n-=thisatk;
			}else{
				ans+=nextatk;
			}
			j--;
			for(j=j;j>=i;j--){
				a[j]=a[j-1];
			}
			/*debug*/cout<<"thisatk="<<thisatk<<",nextatk="<<nextatk<<",n="<<n<<",a[i]="<<a[i]<<",a[j]="<<a[j]<<"\n";
		}
		cout<<ans<<"\n";
	}
	return 0;
}
/*
[I1]
8
999999999 4 21 22 23 29
9 3 12 26 29
8 3 21 26 34
5 3 1 21 34
10 3 17 26 31
7 3 1 26 29
7 3 15 21 34
1000000000 5 25 77 79 33 41
[O1]
663123460
7
7
5
8
6
6
985680258
*/
/*
1
1000 2 50 50


750
*/