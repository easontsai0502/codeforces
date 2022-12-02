/*
[Q]
[]
*/

/*include*/
#pragma GCC optimize("Ofast")
#pragma GCC optimize("O2")
#pragma GCC optimize("O1")
#pragma GCC optimize("O3")
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

/*using namespace*/
using namespace std;

/*define type*/
#define what_the_fuck cin.tie(0);cout.tie(0);ios::sync_with_stdio(false)
#define ULLI unsigned long long int
#define LLI long long int
#define INT LLI
#define UINT unsigned INT
#define PII pair<INT,INT>
#define PUIUI pair<UINT,UINT>
#define endl "\n"
#define DBG if(debug)
#define FIR first
#define SEC second
#define elif else if
#define CIN( nn ) DBG{cout<<"input:"<<endl;}cin >> nn ;
#define COUT( nn ) DBG{cout<<"output:{";}cout << nn ; DBG{cout<<"}"<<endl;}

/*struct*/
/*fn宣告*/
/*num*/
bool debug=false;
bool iofast=true;
INT n,m,q;
const INT mxnm=1e3;
INT mp[mxnm+5][mxnm+5];
INT mx[]={0,1,0,-1};
INT my[]={1,0,-1,0};
/*fn定義*/
/*main*/
int main(){
	/*IO加速*/
	if(!debug&&iofast){what_the_fuck;}
	/*CIN*/
	cin>>n>>m>>q;
	string str;
	deque<PII> dol;
	
	for(INT i=1;i<=n;i++){
		cin>>str;
		for(INT j=1;j<=m;j++){
			if(str[j-1]=='#')mp[i][j]=-2;
			elif(str[j-1]=='T'){
				PII pp={i,j};
				dol.push_back(pp);
				mp[i][j]=0;
			}
			else{
				mp[i][j]=-1;
			}
		}
	}
	/*solve*/
	DBG{
		for(INT i=1;i<=n;i++){
			for(INT j=1;j<=m;j++){
				cerr<<mp[i][j]<<" ";
			}
			cerr<<endl;
		}
	}
	
	INT dolc=dol.size();
	while(!dol.empty()){
		PII i=dol.front();
		dol.pop_front();
		INT &x=i.FIR;
		INT &y=i.SEC;
		DBG cerr<<x<<","<<y<<endl;
		for(INT j=0;j<4;j++){
			INT nx=x+mx[j];
			INT ny=y+my[j];
			if(nx<=0||ny<=0||nx>n||ny>m)continue;
			elif(mp[nx][ny]==-2)continue;
			elif(mp[nx][ny]==-1 || mp[nx][ny]>mp[x][y]+1){
				mp[nx][ny]=mp[x][y]+1;
				PII p={nx,ny};
				dol.push_back(p);
			}
		}
	}
	DBG{
		for(INT i=1;i<=n;i++){
			for(INT j=1;j<=m;j++){
				cerr<<mp[i][j]<<" ";
			}
			cerr<<endl;
		}
	}
	while(q--){
		INT qx,qy;
		cin>>qx>>qy;
		cout<<mp[qx][qy]<<endl;
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
