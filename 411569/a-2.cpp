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
const INT mxn=200000;
INT m,n;
INT a[mxn+1];//點資料
/*並查集*/INT lt[mxn+1];//並查集資料
INT mxl[mxn+1];//mxl[i]表編號i的樹的最大值
INT mxpl[mxn+1];//mxl[i]表編號i的樹的最大值的位置
INT mxp=0;//表整份點資料的最大值
INT mxnum=0;//表整份點資料的最大值的位置
/*fn定義*/

/*並查集*/void lt_clear(){
	for(INT i=0;i<size(lt);i++){
		lt[i]=i;
	}
}
/*並查集*/INT lt_find(INT a){
	if(lt[a]==a)return a;
	else return lt[a]=lt_find(lt[a]);
}
/*並查集*/INT lt_link(INT a,INT b){
	return lt[lt_find(a)]=lt_find(b);
}
/*並查集*/bool lt_check(INT a,INT b){
	return lt_find(a)==lt_find(b);
}

/*main*/
int main(){
	/*IO加速*/
	if(!debug&&iofast){what_the_fuck;}
	/*re:0*/
	lt_clear();
	/*CIN*/
	cin>>n>>m;
	for(INT i=1;i<=n;i++){
		cin>>a[i];
		if(mxnum<a[i]){
			mxnum=a[i];
			mxp=i;//記錄所有資料中最大節點的編號
		}
	}
	INT x,y;
	for(INT i=0;i<m;i++){//建立樹
		cin>>x>>y;
		lt_link(x,y);
	}
	/*solve*/
	set<INT>se;
	for(INT i=1;i<=n;i++){
		INT ltf=lt_find(i);//樹編號
		se.insert(ltf);//將樹編號加入se(沒有x)，方便後面輸出
		if(mxl[ltf]<a[i]){
			mxpl[ltf]=i;//紀錄該棵樹的最大節點的編號
			mxl[ltf]=a[i];
		}
	}
	INT aaaaa=lt_find(mxp);//找出節點mxp的老大
	for(INT i:se){
		if(i!=aaaaa)cout<<mxpl[i]<<" "<<mxp<<endl;
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
