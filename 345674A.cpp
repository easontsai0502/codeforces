/*
[Q]https://codeforces.com/group/iTpKFww7Hn/contest/345674/problem/A
[MLE 3]
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
	int n;
	cin>>n;
	map<char,ulli> ma[n];//記錄各個字母出現次數(0/1)
	string s;//紀錄input
	vector<char> sss[n];
	for(int i=0;i<n;i++){
		cin>>s;
		for(int j=0;j<s.size();j++){
			if(ma[i].count(s[j])){
				ma[i][s[j]]=(ma[i][s[j]]+1)%2;
			}else{
				ma[i][s[j]]=1;
			}
		}
		for(int j=0;j<s.size();j++){
			if(ma[i][s[j]]%2 && count(sss[i].begin(),sss[i].end(),s[j])==0){
				sss[i].push_back(s[j]);
			}
		}
	}
	ulli ans=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			ulli allcount=sss[i].size()+sss[j].size();
			for(int k=0;k<sss[i].size();k++){
				if(ma[j][sss[i][k]]){
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