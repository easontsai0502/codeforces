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

/*fn定義*/

/*main*/
int main(){
	{/*IO加速*/
		cin.tie(0);
		cout.tie(0);
		ios::sync_with_stdio(false);
	}
	INT n,q;
	cin>>n>>q;
	vector<PII> road;
	for(INT i=0;i<n;i++){
		PII a;
		cin>>a.first>>a.second;
		road.push_back(a);
	}
	sort(road.begin(),road.end());
	INT roadlong[n+1];
	INT getcandy[n+1];
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/
