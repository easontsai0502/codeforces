*
[Q]https://codeforces.com/group/iTpKFww7Hn/contest/375463/problem/E
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		unsigned long long int a[3][3];
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cin>>a[i][j];
			}
		}
		unsigned long long int ans=0;
		//檢查橫行
		for(int i=0;i<3;i++){
			unsigned long long int add=min(a[i][0],min(a[i][1],a[i][2]));
			ans+=add;
			a[i][0]-=add;
			a[i][1]-=add;
			a[i][2]-=add;
		}
		//檢查直列
		for(int i=0;i<3;i++){
			unsigned long long int add=min(a[0][i],min(a[1][i],a[2][i]));
			ans+=add;
			a[0][i]-=add;
			a[1][i]-=add;
			a[2][i]-=add;
		}
		//檢查單格
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				ans+=a[i][j]/3;
				a[i][j]%=3;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
/*
[I1]
4
2 1 1
1 0 0
1 0 5
2 1 0
1 0 1
0 1 2
1000000000 1000000000 1000000000
1000000000 1000000000 1000000000
1000000000 999999999 1000000000
123 321 234
412 231 314
123 123 321
[O1]
3
0
2999999999
733
*/