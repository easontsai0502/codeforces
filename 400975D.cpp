/*
[Q]https://codeforces.com/group/VEc3guEDmO/contest/400975/problem/D
[012]
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
	INT a[n];
	for(INT i=0;i<n;i++){
		cin>>a[i];
	}
	/*solve*/
	INT ans=0;
	INT anscount=0;
	bool undo=true;
	for(INT i=0;i<n;i++){
		INT j=i+1;
		INT adder=1;
		for(INT k=i+2;k<n;k++){
			if(k-1!=j){
				if(a[k-1]<a[j]){j=k-1;adder=1;}
				else if(a[k-1]==a[j])adder++;
			}
			INT now=a[i]-a[j]+a[k];
			if(undo){
				ans=now;
				anscount=1;
				undo=false;
				//*debug*/cout<<"\n";cout<<ans<<" "<<i<<","<<j<<","<<k<<" ";
			}else if(ans<now){
				ans=now;
				anscount=1;
				//*debug*/cout<<"\n";cout<<ans<<" "<<i<<","<<j<<","<<k<<" ";
			}else if(ans==now){
				anscount+=adder;
				//*debug*/cout<<i<<","<<j<<","<<k<<" ";
			}
		}
	}
	//*debug*/cout<<"\n";
	cout<<ans<<" "<<anscount;
	return 0;
}

/*
[I1]
10
8 1 6 7 5 8 1 7 2 9
[O1]
*/

/*think*/
/*

*/
