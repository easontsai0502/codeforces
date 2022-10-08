/*
[Q]https://codeforces.com/group/VEc3guEDmO/contest/400975/problem/B
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
	INT q;
	cin>>q;
	deque<INT> que;
	INT love=0;
	while(q--){
		INT r;
		cin>>r;
		switch (r){
			case 1:
				INT x;
				cin>>x;
				que.push_front(x);
			break;
			case 2:
				cout<<love<<"\n";
			break;
			case 3:
				cout<<que.size()<<"\n";
			break;
		}
		while(que.size()>=2){
			if(que.size()==2){
				INT a=que.front();
				INT b=que.back();
				if(a==b){
					love+=3;
					que.pop_back();
					que.pop_back();
				}else{
					break;
				}
			}else if(que.size()>2){
				INT a=que.front();
				INT b=que.back();
				deque<INT>::iterator it=que.begin();
				it++;
				if(a==b){
					love+=2;
					que.pop_back();
					que.pop_front();
				}else if(a==*it){
					love++;
					que.pop_front();
					que.pop_front();
				}else{
					break;
				}
			}
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
