/*
[Q]https://codeforces.com/gym/397692/problem/C
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
	{/*CIN*/

	}
	{/*solve*/

	}
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*
利用dp[i][v]代表從大於等於i,v的第一個出現v的位置在哪
i代表位置，v代表0和1
意思就是說找i右邊第一個是v的位置
當然答案可能=i


*/
