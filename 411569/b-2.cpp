/*
[Q]
[TLE]
*/

/*include*/
#pragma GCC optimize("Ofast")
#pragma GCC optimize("O2")
#pragma GCC optimize("O1")
#pragma GCC optimize("O3")
#include<iostream>
#include<cstring>
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
#define INT int
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
#define wassomething() empty()==false

/*struct*/
/*fn宣告*/
/*num*/
bool debug=0;
bool iofast=true;
INT n,m,q;
const INT mxnm=1e6;
map<PII,INT>mp;

deque<pair<PII,INT>>dol;
map<PII,bool>waswalk;
//INT mp[mxnm+5][mxnm+5];
PII mv[]={{0,1},{1,0},{0,-1},{-1,0}};
INT mx[]={0,1,0,-1};
INT my[]={1,0,-1,0};
/*fn定義*/
PII padd(PII a,PII b){
	return {a.FIR+b.FIR,a.SEC+b.SEC};
}
/*main*/
int main(){
	/*IO加速*/
	if(!debug&&iofast){what_the_fuck;}
	/*CIN*/
	cin>>n>>m>>q;
	string str;
	for(INT i=1;i<=n;i++){
		cin>>str;
		for(INT j=1;j<=m;j++){
			if(str[j-1]=='#')mp[{i,j}]=-2;
			elif(str[j-1]=='T'){
				mp[{i,j}]=1;
			}
		}
	}
	/*solve*/
	while(q--){
		PII q;
		cin>>q.FIR>>q.SEC;
		if(mp[q]==1){
			cout<<"0"<<endl;
			continue;
		}
		dol.clear();//bfs
		waswalk.clear();//紀錄有被走過的格子
		dol.push_back({q,0});//bfs
		//此deque的結構為{座標,移動到這裡最少要幾步}
		INT ans=-1;
		while(dol.wassomething()){
			pair<PII,INT>nw=dol.front();//bfs
			dol.pop_front();//bfs
			DBG{
				cerr<<nw.FIR.FIR<<","<<nw.FIR.SEC<<" "<<nw.SEC<<endl;
			}
			waswalk[nw.FIR]=true;//記錄這格有被走過
			for(INT i=0;i<4;i++){
				PII nx=padd((nw.FIR),mv[i]);//計算下一步的位置
				if(nx.FIR<=0||nx.SEC<=0||nx.FIR>n||nx.SEC>m)continue;//超出地圖外就滾
				if(mp[nx]==1){//如果下一格就是行李箱
					ans=nw.SEC+1;//計算步數
					dol.clear();//將代辦事項清空，因為已經有答案了
					break;//退出
				}elif(mp[nx]!=-2){
					if(waswalk[nx])continue;//這格有被走過就跳過
					dol.push_back({nx,nw.SEC+1});//如果那邊不是牆壁就繼續往前走
				}
			}
		}
		cout<<ans<<endl;
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
