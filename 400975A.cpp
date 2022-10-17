/*
[Q]https://codeforces.com/group/VEc3guEDmO/contest/400975/problem/A
[100/100]
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

/*fn定義*/

/*main*/
int main(){
	{/*IO加速*/
		cin.tie(0);
		cout.tie(0);
		ios::sync_with_stdio(false);
	}
	int a;
	cin>>a;
	for(int i=a-1;i>0;i--){
		bool c=true;
		for(int j=2;j<a+i;j++){
			if((a+i)%j==0 && (a+i)/j!=1){
				c=false;
				break;
			}
		}
		if(c){
			cout<<i;
			break;
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
