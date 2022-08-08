#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
int main(){
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
    ulli n,q;
    cin>>n>>q;
    map<ulli,ulli> a;
    ulli tot=0;
    for(int i=0;i<n;i++){
        ulli x;
        cin>>x;
        a[i]=x;
        tot+=x;
    }
    ulli bigdo=0;
    while(q--){
        int t;
        cin>>t;
        t--;
        if(t){
            cin>>bigdo;
            tot=bigdo*x;
            a.clear();
        }else{
            ulli i,x;
            cin>>i>>x;
            tot+=x;
            if(a.find(i)!=a.end()){
                tot-=map[i];
            }else{
                tot-=bigdo;
            }
            map[i]=x;
        }
        cout<<tot;
    }
	return 0;
}
