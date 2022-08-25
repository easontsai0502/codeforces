/*
[Q]https://codeforces.com/gym/395777/problem/0
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
#define ulli unsigned long long int
#define lli long long int
#define pii pair<int,int>
#define plli pair<lli,lli>
#define pulli pair<ulli,ulli>
#define INT int
#define UINT unsigned INT

/*struct*/

/*num*/
string str;
vector<string> codein;
UINT ansk;

/*fn*/
void solve(){
	UINT codeinsize=codein.size();
	UINT nowans=0;
	for(UINT i=0;i<codeinsize;i++){
		string nowline=codein[i];
		UINT nowlinesize=nowline.size();

	}
}

/*main*/
int main(){
	while(getline(cin,str)){
		codein.push_back(str);
	}
	solve();
	if(ansk==0){
		cout<<"Theta(1)";
	}else{
		cout<<"Theta(n^"<<ansk<<")";
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