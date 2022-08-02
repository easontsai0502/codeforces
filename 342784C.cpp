/*
[Q]https://codeforces.com/group/iTpKFww7Hn/contest/342784/problem/C
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
int main(){
	int a;
	cin>>a;
	while(a--){
		int n;
		cin>>n;
		vector<int> numin;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			numin.push_back(x);
		}
		vector<int> sortlist(numin);
		sort(sortlist.begin(),sortlist.end());
		vector<int> uniquelist(sortlist);
		int c=(unique(uniquelist.begin(),uniquelist.end())-uniquelist.begin());
		map<int,int> ans;
		for(int i=0;i<c;i++){
			ans[uniquelist[i]]=i;
		}
		for(int i=0;i<n;i++){
			cout<<ans[numin[i]]+1<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
/*
[I1]
3
5
1 2 3 4 5
4
10 40 30 20
2
1234 913
[O1]
1 2 3 4 5
1 4 3 2
2 1
*/