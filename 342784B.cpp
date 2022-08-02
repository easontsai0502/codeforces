/*
[Q]https://codeforces.com/group/iTpKFww7Hn/contest/342784/problem/B
*/
#include<iostream>
#include<algorithm>
using namespace std;
bool asb(int& a,int& b){
	return a<b;
}
int main(){
	int n;
	cin>>n;
	int numlist[n];
	for(int i=0;i<n;i++){
		cin>>numlist[i];
	}
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(numlist[i]-numlist[j]==i-j || numlist[i]-numlist[j]==j-i){
				ans++;
			}
		}
	}
	cout<<ans*2;
	return 0;
}

/*
[I1]
3
1 2 3
[O1]
6
[I2]
5
10 11 13 13 9
[O2]
6
*/