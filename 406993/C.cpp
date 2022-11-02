/*
[zj]		[Q]https://zerojudge.tw/ShowProblem?problemid= [題目編號]
[tioj]	[Q]https://tioj.ck.tp.edu.tw/problems/ [題目編號]
[cses]	[Q]https://cses.fi/problemset/task/ [題目編號]
[cf]		[Q]https://codeforces.com/group/VEc3guEDmO/contest/406993/problem/C
[]
*/

/*include*/
#pragma GCC optimize("Ofast")
#pragma GCC optimize("O2")
#pragma GCC optimize("O1")
#pragma GCC optimize("O3")
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
#define what_the_fuck cin.tie(0);cout.tie(0);ios::sync_with_stdio(false)
#define ULLI unsigned long long int
#define LLI long long int
#define INT int
#define UINT unsigned INT
#define PII pair<INT,INT>
#define PUIUI pair<UINT,UINT>
#define endl "\n"
#define wassomething() empty()==false

/*struct*/
struct super_pair{
	INT x1=0;
	INT x2=0;
	INT x3=0;
	INT x4=0;
	INT x5=0;
};
/*fn宣告*/
/*num*/
bool debug=false;
bool iofast=true;
/*fn定義*/
/*main*/
int main(){
	/*IO加速*/
	if(!debug&&iofast)what_the_fuck;
	//cin
	INT l;
	cin>>l;
	int num;
	vector<int> a;
	for(INT i=0;i<l;i++){
		cin>>num;
		a.push_back(num);
	}


	/*為lis初始化*/
	reverse(a.begin(), a.end());//a反向
	//solve
	int N = l;//計算DP大小

	int dp[N+1];//建立dp
	dp[0] = 1;//dp初始化
	
	vector<int> v;//已走訪過的數字
	v.push_back(a[0]);//v初始化

	int L = 1; //LIS length



{
	/*LIS*/
	//L為長度
	for (int i=1; i<N; i++){
		if (a[i] > v.back()){//如果現在這個大於v最頂端的
			v.push_back(a[i]);//先將自己推進v
			L++;//長度增加
			dp[i] = L;
		} else {
			auto it = lower_bound(v.begin(), v.end(), a[i]);//尋找v裡面最第一個大於等於她的數
			*it = a[i];//將此數換成更小的數(自己)
			dp[i] = (int) (it - v.begin() + 1);//計算長度，因為此vector是遞增子序列，直接量他的size就可以了
		}
	}/*
	//尋找順序
	vector<int> ans;
	for (int i=N-1; i>=0; i--){//由後往前
		if (dp[i] == L){
			ans.push_back(a[i]);//找到的話就把元素塞進ans
			L--;
		}
	}
	reverse(ans.begin(), ans.end());//ans反向
	//輸出順序
	for (auto i: ans){
		cout << i << '\n';
	}
	*/
}
	INT ans=0;
	for(INT i=1;i<=L-2;i++){
		INT k=L-(i+1);
		ans+=(k+1)*(k)/2;
	}
	cout<<ans<<endl;

	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/
