/*
[Q]https://codeforces.com/group/gRkn7bDfsN/contest/209884/problem/B
[]
[sample ans]http://dreamoon4.blogspot.com/2016/11/13.html
*/

/*include*/
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<deque>
#include<map>

using namespace std;

/*define*/
#define lli long long int
#define ulli unsigned long long int
#define pii pair<int,int>

/*fn*/
bool out(int x,int y){return (x<0 || y<0 || x>=n || y>=n);}

/*num*/
const int maxn=100000
int step[maxn+1][maxn+1][2];
int movex={0,1,0,-1};
int movey={1,0,-1,0};
int n;
int mapnum[maxn+1][maxn+1];

/*main*/
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int i=0;i<n;i++){
			
		}
	}
	return 0;
}

/*
[I1]
2
3 4
7 5
[O1]
3
[I2]
3
15 16 18
13 11 9
2 7 3
[O2]
7
*/