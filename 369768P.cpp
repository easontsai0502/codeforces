#include<iostream>
#include<queue>
using namespace std;
int main(){
	unsigned long long int n;
	cin>>n;
	priority_queue<unsigned long long int,vector<unsigned long long int>,less<unsigned long long int>> numlist;
	for(int i=0;i<n;i++){
		unsigned long long int a;
		cin>>a;
		numlist.push(a);
	}
	unsigned long long int ans=0;
	for(int i=0;i<n;i++){
		unsigned long long int ad=n-i-1;
		unsigned long long int nownum=numlist.top();
		ans+=(n-i-1-i)*nownum;
		numlist.pop();
	}
	cout<<ans<<"\n";
	return 0;
}


/*
[I1]
3
1 3 5
[O1]
8
[I2]
1
0
[O2]
0
[I3]
9
100000 10 1 10 1 1 2 1 2
[O3]
800084
[思考邏輯]
a b c d (假設a>=b>=c>=d)
|a-b|=a-b
(a-b)+(a-c)+(a-d)+(b-c)+(b-d)+(c-d)
a-b+a-c+a-d+b-c+b-d+c-d
a+a+a-b+b+b-c-c+c-d-d-d
(3a-0a)+(2b-1b)+(1c-2c)+(0d-3d)
*/