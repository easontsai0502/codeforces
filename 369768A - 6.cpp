#include<iostream>
using namespace std;
int main(){
	unsigned long long int ans;
	unsigned long long int l;
	unsigned long long int r;
	cin>>l>>r;
	unsigned long long int a,b;
	a=l+r;
	b=r-l+1;
	if(a%2){
		b/=2;
	}else{a/=2;}
	cout<<a*b;
	
	return 0;
}
