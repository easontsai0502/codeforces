/*
[Q]https://codeforces.com/gym/395777/problem/C
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

/*fn*/
UINT fuc(string str){
	INT n=str.size();
	UINT re=0;
	for(int i=0;i<n;i++){
		re+=int(str[i])-int('0');
	}
	return re;
}

/*main*/
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*
*/
