//200%不用請我麥當勞
//200%不用請我麥當勞
//200%不用請我麥當勞
/*
[Q]https://codeforces.com/group/VEc3guEDmO/contest/400975/problem/E
[100/200]
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

/*fn定義*/
INT numup(INT a,INT b){
	if(b==0){
		if(a>0) return 1;
		else return -1;
	}
	else if(b==1) return a;
	else return numup(a,b-1)*a;
}
/*main*/
int main(){
//	{/*IO加速*/
//		cin.tie(0);
//		cout.tie(0);
//		ios::sync_with_stdio(false);
//	}
	/*CIN*/
	int k;
	cin>>k;
	INT up;
	INT down;
	if(k==1){
		up=1e9;
		down=2;
	}else{
		down=-1e9;
		up=-2;
	}
	down-=1;
	int dotime=35;
	while(dotime--){
		if(abs(up-down)<=1){
			cout<<"! "<<up<<"\n";//fflush(stdout);
			break;
		}else{
			INT ask=(up+down)/2;
			cout<<"? "<<ask<<"\n";//fflush(stdout);
			INT respond;
			cin>>respond;
			INT newup=numup(ask,respond);
			INT newdown=newup/ask;
			down=max(down,newdown);
			up=min(up,newup);
		}
	}
	/*solve*/
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/
//要我講幾次?200%不用請我麥當勞
//要我講幾次?200%不用請我麥當勞
//要我講幾次?200%不用請我麥當勞
//要我講幾次?200%不用請我麥當勞
//要我講幾次?200%不用請我麥當勞
//要我講幾次?200%不用請我麥當勞
//要我講幾次?200%不用請我麥當勞
//要我講幾次?200%不用請我麥當勞
//要我講幾次?200%不用請我麥當勞
//要我講幾次?200%不用請我麥當勞
//要我講幾次?200%不用請我麥當勞
//要我講幾次?200%不用請我麥當勞
//要我講幾次?200%不用請我麥當勞