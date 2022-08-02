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
vector<vector<bool>> mp[61];
void cp(int n){
	if(n==cpnow+1){
		for(int i=0;i<(2<<cpnow);i++){
			vector<bool> up,down;
			for(int j=0;i<(2<<cpnow);i++){
				if(mp[cpnow][i][j]){
					up.push_back(true);
					up.push_back(true);
					down.push_back(true);
					down.push_back(false);
				}else{
					up.push_back(false);
					up.push_back(false);
					down.push_back(false);
					down.push_back(false);
				}
			}
			mp[n].push_back(up);
			mp[n].push_back(down);
		}
	}
}
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	int q;
	cin>>q;
	cpnow=0;
	mp[0][0][0]=true;
	while(q--){
		int t,xa,ya,xb,yb;
		cin>>t>>xa>>ya>>xb>>yb;
		for(int i=1;i<=t;i++){
			cp(i);
		}
		for(int i=xa;i<=xb;i++){
			for(int j=ya;j<=yb;j++){
				if(mp[t][i-1][j-1]){
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