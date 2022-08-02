/*
[Q]https://codeforces.com/group/iTpKFww7Hn/contest/340173/problem/F
*/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
const int max_n=200000;
const int max_q=200000;
int intheway[max_n+1];
vector<pair<int,int>> qlist[max_n+1];
vector<int> childlist[max_n+1];
vector<int> ans(max_q+1,false);
int finder(int fnum){
	intheway[fnum]=1;
	int nedfind=qlist[fnum].size();
	for(int i=0;i<nedfind;i++){
		ans[qlist[fnum][i].second]=intheway[qlist[fnum][i].first];
	}
	nedfind=childlist[fnum].size();
	for(int i=0;i<nedfind;i++){
		finder(childlist[fnum][i]);
	}
	intheway[fnum]=0;
	return 0;
}


int main(){
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		int a;
		cin>>a;
		childlist[a].push_back(i);
	}
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int x,y;
		cin>>x>>y;
		qlist[y].push_back(make_pair(x,i));
	}
	finder(1);
	for(int i=0;i<q;i++){
		cout<<ans[i]<<"\n";
	}
	return 0;
}
/*
[I1]
6
1 1 2 2 5
7
2 3
2 4
4 6
5 6
6 5
2 6
6 3
[O1]
0
1
0
1
0
1
0
*/