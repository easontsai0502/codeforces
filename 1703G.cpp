/*
[Q]https://codeforces.com/problemset/problem/1703/G
*/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		unsigned long long int ans=0;
		while(n--){
			int innum;
			cin>>innum;
			ans+=max(innum-k,innum/2);
		}
		cout<<ans<<"\n";
	}
	return 0;
}
/*
[I1]
5
4 5
10 10 3 1
1 2
1
3 12
10 10 29
12 51
5 74 89 45 18 69 67 67 11 96 23 59
2 57
85 60
[O1]
11
0
13
60
58
*/

/*
[IO1]
[I]
>5
	>4 5
	>10 10 3 1
	<11
	
	>1 2
	>1
	<0
	
	>3 12
	>10 10 29
	<13
	
	>12 51
	>5 74 89 45 18 69 67 67 11 96 23 59
	<60
	
	>2 57
	>85 60
	<58
*/