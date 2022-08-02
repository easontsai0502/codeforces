/*
[Q]https://codeforces.com/group/iTpKFww7Hn/contest/342784/problem/E
*/
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;
int digit_sum(int n){
	string str=to_string(n);
	int ans=0;
	for(int i=0;i<str.size();i++){
		ans+=str[i]-int('0');
	}
	return ans;
}
int main(){
	int l,r,va,vb;
	cin>>l>>r>>va>>vb;
	int i,j,ans=0;
	j=l;
	int digit_sum_total_min=0;
	int digit_sum_total_now=0;
	int minj=l;
	for(i=l;i<=r;i++){
		digit_sum_total_min+=digit_sum(i);
		while(minj<=r && digit_sum_total_min<va){
			minj++;
			digit_sum_total_min+=digit_sum(minj);
		}
		digit_sum_total_now=digit_sum_total_min;
		while(j<=r && digit_sum_total_now<=vb){
			j++;
			digit_sum_total_now+=digit_sum(j);
		}
		ans+=j-minj;
		digit_sum_total_min-=digit_sum(i);
	}
	return 0;
}
/*
[I1]
2 19 2 6
[O1]
14
[I2]
514 5145145 514 51451451
[O2]
7533192826989
*/