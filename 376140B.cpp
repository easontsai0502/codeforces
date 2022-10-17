/*
[Q]https://codeforces.com/group/VEc3guEDmO/contest/376140/problem/B
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

/*fn定義*/

/*main*/
int main(){
	{/*IO加速*/
		cin.tie(0);
		cout.tie(0);
		ios::sync_with_stdio(false);
	}
	/*CIN*/
	INT n;
	cin>>n;
	INT a[2],fir;
	a[0]=a[1]=0;
	INT big=0;
	INT ni=0;
	for(int i=0;i<n;i++){
		cin>>a[i%2];
		if(i==0){
			fir=a[i%2];
		}else{
			INT now=0;
			now+=a[0]-1;
			now+=a[1]-1-1;
			big=max(big,now);
		}
	}
	INT now=0;
	now+=a[(n-1)%2]-1;
	now+=fir-1-1;
	big=max(big,now);
	cout<<big;
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
