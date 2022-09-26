/*
[Q]https://codeforces.com/gym/397692/problem/H
[MLE]
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
INT x=0,y=0,m=0;
vector<INT> palist[2];
vector<INT> thisline;
/*fn定義*/
INT mirror(INT a,INT b){
	if(b>a/2){
		return a-b+1;
	}else return b;
}
/*main*/
int main(){
	{/*IO加速*/
		cin.tie(0);
		cout.tie(0);
		ios::sync_with_stdio(false);
	}
	/*CIN*/
	cin>>x>>y>>m;
	y=mirror(x,y);
	/*solve*/
	if(m<=1)cout<<"0";
	else{
		for(INT i=1;i<=x;i++){
			thisline.push_back(0);
			for(INT j=1;j<=i;j++){
				if(i<=2){
					thisline.push_back(1);
				}else{
					thisline.push_back((palist[(i+1)%2][mirror(i-1,j)]+palist[(i+1)%2][mirror(i-1,j-1)])%m);
				}
				//cout<<thisline[j]<<" ";
			}
			palist[(i)%2]=thisline;
			thisline.clear();
			//cout<<"\n";
		}
		cout<<palist[x][y];
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
