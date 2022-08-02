/*
[no AC]
[Q]https://codeforces.com/gym/391774/problem/F
*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
int cpnow;
bool mp[61][2<<60+1][2<<60+1];
void cp(int n){
	if(n==cpnow+1){
		for(int i=0;i<=(2<<cpnow);i++){
			for(int j=0;i<=(2<<cpnow);i++){
				if(mp[cpnow][i][j]){
					mp[n][i*2-1][j*2-1]=true;
					mp[n][i*2][j*2-1]=true;
					mp[n][i*2-1][j*2]=true;
					mp[n][i*2][j*2]=false;
				}
			}
		}
	}
}
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	int q;
	cin>>q;
	cpnow=0
	mp[0][1][1]=true;
	while(q--){
		int t,xa,ya,xb,yb;
		cin>>t>>xa>>ya>>xb>>yb;
		for(int i=1;i<=t;i++){
			cp(i);
		}
		for(int i=xa;i<=xb;i++){
			for(int j=ya;j<=yb;j++){
				if(mp[t][i][j]){
					cout<<"R";
				}else{
					cout<<"B";
				}
			}
			cout<<"\n";
		}
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