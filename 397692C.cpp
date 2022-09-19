/*
[Q]
[]
*/

/*include*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<sstream>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<stack>
#include<cstring>
#include<unordered_map>

/*using namespace*/
using namespace std;

/*define type*/
#define ULLI unsigned long long int
#define LLI long long int
#define INT int
#define UINT unsigned INT
#define PII pair<INT,INT>
#define PUIUI pair<UINT,UINT>

/*struct*/

/*fn宣告*/

/*num*/
const INT maxn=1e6;
INT n,q;
string s;
string t[maxn+1];
INT sss[maxn+1][2];
INT p[maxn+1];
INT ans[maxn+1];
bool wasdo[maxn+1];
/*fn定義*/
INT sto01(char c){
	if(c=='0'){
		return 0;
	}else{
		return 1;
	}
}
/*main*/
int main(){
	{/*IO加速*/
		cin.tie(0);
		cout.tie(0);
		ios::sync_with_stdio(false);
	}
	{/*CIN*/
		cin>>n>>q;
		cin>>s;
		
		for(int i=0;i<q;i++){
			cin>>t[i];
		}
		
	}
	{/*solve*/
		INT r0=n;
		INT r1=n;
		for(INT i=n-1;i>=0;i--){
			if(s[i]=='0'){
				r0=i;
			}else if(s[i]=='1'){
				r1=i;
			}
			sss[i][0]=r0;
			sss[i][1]=r1;
		}
		for(int i=0;i<2;i++){
			for(int j=0;j<n;j++){
				cout<<sss[j][i];
			}
			cout<<"\n";
		}
		for(INT i=0;i<n;i++){
			cout<<i<<","<<sss[i][0]<<" "<<sss[i][1]<<":";
			for(int j=0;j<q;j++){
				if(p[j]==t[j].size()){
					continue;
				}
				INT nowplace=p[j];
				INT nownum;
				if(t[j][nowplace]=='1'){
					nownum=1;
				}else{
					nownum=0;
				}
				cout<<nownum;
				if(p[j]<t[j].size() && sss[i][nownum]==i){
					p[j]++;
					cout<<"V";
					wasdo[j]=true;
				}
				if(wasdo[j] && p[j]<=t[j].size()){
					ans[j]++;
				}
				cout<<" ";
			}
			cout<<"\n";
		}
	}
	for(int i=0;i<q;i++){
		if(t[i].size()==p[i]){
			cout<<ans[i]<<"\n";
		}else{
			cout<<"-1\n";
		}
	}
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/

/*think*/
/*
利用dp[i][v]代表從大於等於i,v的第一個出現v的位置在哪
i代表位置，v代表0和1
意思就是說找i右邊第一個是v的位置
當然答案可能=i


*/
