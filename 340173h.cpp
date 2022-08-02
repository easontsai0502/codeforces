/*
[Q]https://codeforces.com/group/iTpKFww7Hn/contest/340173/problem/H
*/
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
vector<int> nownumlist;
vector<int> inputlist;
stringstream ansstr;
int n,a,cou=0;
void in(){
	cou++;
	for(int i=0;i<n-1;i++){
		ansstr<<nownumlist[i]<<"^";
	}
	ansstr<<nownumlist[n-1]<<"="<<a<<"\n";
}
void finder(int ad){
	if(ad==n){
		int xorans=0;
		for(int i=0;i<n;i++){
			xorans=xorans^nownumlist[i];
		}
		if(xorans==a){
			in();
		}
	}else{
		for(int i=0;i<=inputlist[ad];i++){
			nownumlist.push_back(i);
			finder(ad+1);
			nownumlist.pop_back();
		}
	}
}
int main(){
	cin>>n>>a;
	for(int i=0;i<n;i++){
		int v;
		cin>>v;
		inputlist.push_back(v);
	}
	finder(0);
	cout<<cou<<"\n";
	string o;
	while(ansstr>>o){
		cout<<o<<"\n";
	}
	return 0;
}