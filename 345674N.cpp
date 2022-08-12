/*
[Q]https://codeforces.com/group/iTpKFww7Hn/contest/345674/problem/N
[]
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
int pss(int a,int b){/*猜拳答案機*/
	/*
	[a,b]
	1=剪刀
	2=石頭
	3=不～
	[return]
	-1=a輸
	1=a贏
	2=a平
	*/
	/*a=1*/
	if(a==1){
		if(b==1)return 0;
		if(b==2)return -1;
		if(b==3)return 1;
	}
	/*a=2*/
	if(a==2){
		if(b==1)return 1;
		if(b==2)return 0;
		if(b==3)return -1;
	}
	/*a=3*/
	if(a==3){
		if(b==1)return -1;
		if(b==2)return 1;
		if(b==3)return 0;
	}
}
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
    
	return 0;
}
/*
[I1]
2 3
1 2 -1
1 2 0
1 2 1
[O1]
-1
[I2]
6 5
1 2 1
2 3 0
2 4 1
2 5 1
6 2 -1
[O2]
1
[I3]
5 1
1 2 0
[O3]
0
*/