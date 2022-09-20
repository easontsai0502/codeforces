/*
[Q]https://codeforces.com/gym/397692/problem/B
[TLE 5]
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
#define INT LLI
#define UINT unsigned INT
#define PII pair<INT,INT>
#define PUIUI pair<UINT,UINT>

/*struct*/

/*fn宣告*/

/*num*/
INT n;
//n紀錄總共有幾項
const INT maxn=5e5;
INT p[maxn+5];
//p紀錄每個輸入(0~n-1)
INT xp[maxn+5];
//xp紀錄[i]-[i-1](1~n-1)
INT ttxp[maxn+5];
//ttxp紀錄前綴和
/*fn定義*/

/*main*/
int main(){
	{/*IO加速*/
		cin.tie(0);
		cout.tie(0);
		ios::sync_with_stdio(false);
	}
	{/*CIN*/
		cin>>n;
		for(INT i=0;i<n;i++){
			cin>>p[i];
		}
		for(INT i=1;i<n;i++){
			xp[i]=p[i]-p[i-1];
		}
		INT nowtt=0;
		for(INT i=0;i<n;i++){
			nowtt+=xp[i];
			ttxp[i]=nowtt;
		}
	}
	INT mx=0;
	bool wasdo=false;
	INT x=0;
	INT y=0;
	{/*solve*/
		for(INT i=1;i<n;i++){
			for(INT j=0;j<i;j++){
				if(wasdo){
					if(ttxp[i]-ttxp[j]>mx){
						mx=ttxp[i]-ttxp[j];
						x=j;
						y=i;
					}
				}else{
					mx=ttxp[i]-ttxp[j];
					x=j;
					y=i;
					wasdo=true;
				}
			}
		}
	}
	cout<<mx<<" ";
	cout<<x+1<<" ";
	cout<<y+1;
	return 0;
}

/*
[I1]
5
1 3 5 2 4
[O1]
4 1 3
[I2]
2
100 1
[O2]
-99 1 2
[I3]
4
2 2 1 1
[O3]
0 1 2
*/

/*think*/
/*

*/
