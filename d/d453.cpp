/*
[Q]https://zerojudge.tw/ShowProblem?problemid=d453
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
const INT maxn=100;
bool ma[maxn][maxn];//紀錄地圖可不可以走
bool debug=false;
/*fn定義*/
INT ma_length(INT sx,INT sy,INT x1,INT y1,INT x2,INT y2){
	INT bfsstep[sx][sy];
	for(INT i=0;i<sx;i++){//步數初始化
		for(INT j=0;j<sy;j++){
			bfsstep[i][j]=0;
		}
	}
	INT mx[]={1,0,-1,0};//下右上左
	INT my[]={0,1,0,-1};//下右上左
	PII finding={x2,y2};//目標

	queue<PII> dolist;//bfs運作順序
	dolist.push({x1,y1});//將起點push
	bfsstep[x1][y1]=1;//起點也算是一步

	while(!dolist.empty()){//重複直到que為空
		PII now;//將que拿出來
		now=dolist.front();
		dolist.pop();
		if(debug)cout<<now.first<<","<<now.second<<"\n";
		if(now==finding)break;//如果這就是目的地，退出
		//相位移動
		for(INT i=0;i<4;i++){
			INT tx=now.first+mx[i];//移動後的xy座標
			INT ty=now.second+my[i];//移動後的xy座標
			if(tx<0||ty<0||tx>=sx||ty>=sy)continue;//超格，不採計
			if(ma[tx][ty]==false)continue;//不能走，滾
			if(bfsstep[tx][ty]==0){//如果那邊沒被走過就走過去
				bfsstep[tx][ty]=bfsstep[now.first][now.second]+1;//設定那一格的step
				dolist.push({tx,ty});//將那一格加入que
			}
		}
	}
	if(debug){
		for(INT i=0;i<sx;i++){
			for(INT j=0;j<sy;j++){
				cout<<bfsstep[i][j]<<",";
			}
			cout<<"\n";
		}
	}
	return bfsstep[x2][y2];
}
/*main*/
int main(){
	{/*IO加速*/
		cin.tie(0);
		cout.tie(0);
		ios::sync_with_stdio(false);
	}
	INT n;
	cin>>n;
	while(n--){
		/*CIN*/
		INT a,b,c,d,e,f;
		cin>>a>>b>>c>>d>>e>>f;
		c--;
		d--;
		e--;
		f--;
		for(INT i=0;i<a;i++){
			string str;
			cin>>str;
			for(INT j=0;j<b;j++){
				INT aaa=str[i]-'0';
				if(aaa==0)ma[i][j]=true;
				else ma[i][j]=false;
			}
		}
		/*solve*/
		cout<<ma_length(a,b,c,d,e,f)<<"\n";
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
