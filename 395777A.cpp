/*
[Q]https://codeforces.com/gym/395777/problem/0
[AC]
*/

/*include*/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<sstream>
#include<vector>
#include<queue>
#include<deque>
#include<map>
#include<set>

/*using namespace*/
using namespace std;

/*define type*/
#define ulli unsigned long long int
#define lli long long int
#define pii pair<int,int>
#define plli pair<lli,lli>
#define pulli pair<ulli,ulli>
#define INT int
#define UINT unsigned INT

/*struct*/

/*num*/
string str;
vector<string> codein;
UINT ansk;

/*fn*/
void solve(){
	UINT nowans=0;
	bool findl=false;
	UINT l=0;
	deque<UINT> forr;
	string nowline;
	while(cin>>nowline){

		UINT nowlinesize=nowline.size();
		for(UINT j=0;j<nowlinesize;j++){
		    if(j!=nowlinesize-2){
    			if(nowline[j]=='f'){
    				if(nowline[j+1]=='o'){
    					if(nowline[j+2]=='r'){
    						j+=2;
    						nowans++;
    						ansk=max(ansk,nowans);
    						findl=true;
    					}
    				}
    			}
		    }
			if(nowline[j]=='{'){
				l++;
				if(findl){
					forr.push_back(l);
					findl=false;
				}
			}
			if(nowline[j]=='}'){
				if(forr.size()){
					if(forr.back()==l){
						forr.pop_back();
						nowans--;
					}
				}
				l--;
			}
			//*debug*/cout<<findl<<","<<ansk<<","<<l<<","<<j<<"\n";
		}
	}
}

/*main*/
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	ansk==0;
	solve();
	if(ansk==0){
		cout<<"Theta(1)";
	}else{
		cout<<"Theta(n^"<<ansk<<")";
	}
	return 0;
}

/*
[I1]
[O1]
*/

/*think*/
/*

*/
