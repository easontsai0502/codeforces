/*
[no summit]
[Q]https://codeforces.com/gym/391774/problem/J
*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
#define ulli unsigned int
#define lli long long int
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	ulli n,q;
	cin>>n>>q;
	ulli alist;
	for(ulli i=1;i<=n;i++){
		for(ulli j=1;j<=n;j++){
			ulli a=i*j*(j+1);
			alist[(i-1)*n+(j-1)]=a;
		}
	}
	sort(alist.begin(),alist.end());
	while(q--){
		ulli a;
		cin>>a;
		cout<<alist[n*n-a]<<"\n";
	}
	return 0;
}
/*
[I1]
4
3 1 1 8 8
0 1 1 1 1
2 2 2 3 4
60 384307168202282321 768614336404564640 384307168202282335 768614336404564646
[O1]
RRRRRRRR
RBRBRBRB
RRBBRRBB
RBBBRBBB
RRRRBBBB
RBRBBBBB
RRBBBBBB
RBBBBBBB
R
BRB
RBB
BRRRRRR
BRBRBRB
BRRBBRR
BRBBBRB
BRRRRBB
BRBRBBB
BRRBBBB
BRBBBBB
BRRRRRR
BRBRBRB
BRRBBRR
BRBBBRB
BRRRRBB
BRBRBBB
BRRBBBB
*/