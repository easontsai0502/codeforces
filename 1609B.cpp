/*
[Q]https://codeforces.com/problemset/problem/1609/B
*/
#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
#define ulli unsigned long long int
#define lli long long int

int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	int n,q;
	cin>>n>>q;
	string s;
	cin>>s;
	char soldata[n];
	int ans=0;
	/*先把原始字串的答案找出來，並使用陣列儲存資訊*/
	for(int i=0;i<n-2;i++){
		if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c'){
			soldata[i]='a';
			soldata[i+1]='b';
			soldata[i+2]='c';
			i+=2;
			ans++;
		}else{
			soldata[i]='\0';
		}
	}
	while(q--){
		int pos;
		string c;
		cin>>pos>>c;
		pos--;
		if(s[pos]!=c[0]){
			if(soldata[pos]=='a'){
				soldata[pos]='\0';
				soldata[pos+1]='\0';
				soldata[pos+2]='\0';
				ans--;
			}else if(soldata[pos]=='b'){
				soldata[pos-1]='\0';
				soldata[pos]='\0';
				soldata[pos+1]='\0';
				ans--;
			}else if(soldata[pos]=='c'){
				soldata[pos-2]='\0';
				soldata[pos-1]='\0';
				soldata[pos]='\0';
				ans--;
			}
			if(c[0]=='a'){
				if(s[pos+1]=='b' && s[pos+2]=='c'){
					soldata[pos]='a';
					soldata[pos+1]='b';
					soldata[pos+2]='c';
					ans++;
				}
			}else if(c[0]=='b'){
				
				if(s[pos-1]=='a' && s[pos+1]=='c'){
					soldata[pos-1]='a';
					soldata[pos]='b';
					soldata[pos+1]='c';
					ans++;
				}
				
			}else if(c[0]=='c'){
				if(s[pos-2]=='a' && s[pos-1]=='b'){
					soldata[pos-2]='a';
					soldata[pos-1]='b';
					soldata[pos]='c';
					ans++;
				}
				
			}
		}
		s[pos]=c[0];
		cout<<ans<<"\n";
	}
	return 0;
}