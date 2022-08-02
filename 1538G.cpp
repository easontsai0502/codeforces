/*
[Q]https://codeforces.com/contest/1538/problem/G
*/
#include<iostream>
#include<cmath>
#include<algorithm>
#define ulli unsigned long long int
using namespace std;
ulli solver(ulli x,ulli y,ulli a,ulli b,ulli now){
	ulli retans=now;
	x-=a*now;
	y-=b*now;
	retans+=min(x/b,y/a);
	return retans;
}
int main(){
	int n;
	cin>>n;
	while(n--){
		ulli x,y,a,b;
		cin>>x>>y>>a>>b;
		ulli asetmax=x/a,asetmin=0;
		ulli maxans=0;
		ulli now=(asetmax+asetmin)/2;
		while(asetmax==asetmin+1){
			if((asetmax+asetmin)/2==now){break;}
			ulli nowans=solver(x,y,a,b,now);
			ulli nextans=solver(x,y,a,b,now+1);
			if(nowans>nextans){
				asetmax=now;
				maxans=max(nowans,maxans);
			}else if(nowans<nextans){
				asetmin=now=1;
				maxans=max(nextans,maxans);
			}
		}
		maxans=max(maxans,max(solver(x,y,a,b,asetmax),solver(x,y,a,b,asetmin)));
		cout<<maxans<<"\n";
	}
	return 0;
}