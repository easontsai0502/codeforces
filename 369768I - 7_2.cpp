/*
[Q]https://codeforces.com/group/m7tZBvb5sH/contest/369768/problem/I
*/
#include<iostream>
#include<map>
using namespace std;
#define lli long long int
lli numlist[1000001];
int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
	int n;
	cin>>n;
	while(n--){
		lli q;
		cin>>q;
		
		numlist[q]++;
		/*if(numlist.count(q)){
			numlist[q]++;
		}else{
			numlist[q]=1;
		}*/
	}
	cin>>n;
	while(n--){
		lli q;
		cin>>q;
		if(q>1000000){cout<<"0\n";}
		else{cout<<numlist[q]<<"\n";}
		/*if(numlist.count(q)){
			cout<<numlist[q]<<"\n";
		}else{
			cout<<"0\n";
		}*/
	}
	return 0;
}