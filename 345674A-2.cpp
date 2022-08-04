/*
[Q]https://codeforces.com/group/iTpKFww7Hn/contest/345674/problem/A
[TLE 3]
*/
#include<iostream>
#include<algorithm>
#include<map>
#include<cmath>
#include<vector>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	map<char,ulli> ma;//記錄各個字母出現次數(0/1)
	string s;//紀錄input
	vector<char> sss[n];
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<s.size();j++){
			if(ma.count(s[j])){
				ma[s[j]]=(ma[s[j]]+1)%2;
			}else{
				ma[s[j]]=1;
			}
		}
		for(int j=0;j<s.size();j++){
			if(ma[s[j]]%2 && count(sss[i].begin(),sss[i].end(),s[j])==0){
				sss[i].push_back(s[j]);
				ma[s[j]]=0;
			}
		}
	}
	ulli ans=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			ulli allcount=sss[i].size()+sss[j].size();
			for(int k=0;k<sss[i].size();k++){
				if(count(sss[j].begin(),sss[j].end(),sss[i][k])){
					allcount-=2;
				}
			}
			if(allcount==1 || allcount==0){
				ans++;
			}
		}
	}
	cout<<ans;
}