/*
[Q]https://codeforces.com/group/iTpKFww7Hn/contest/342784/problem/A
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	vector<ulli> a,b;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	if(a==b){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}
/*
[I1]
1
2
3
[O1]
0
[I2]
2
1 2
2 1
[O2]
1
[I3]
3
2 3 1
1 2 3
[O3]
1
*/