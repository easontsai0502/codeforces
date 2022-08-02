#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int n,m;
	cin>>n>>m;
	int numlist[n];
	int maxnum=0;
	for(int i=0;i<n;i++){							//紀錄數字清單
		cin>>numlist[i];
		maxnum=max(maxnum,numlist[i]);
	}
	vector< pair<int,int> > q_l[n+1],q_r[n+1];		//q_l[l]=make_pair<x,i>	l為左邊界，x為索引值，i為查詢編號，q_r也是如此
	vector<int> numcountlist(maxnum+1,0);				//nucountlist[n]的值為現在n出現過幾次
	vector<int> anslist(m,0);

	for(int i=0;i<m;i++){							//將查詢值全部記錄到q_l和q_r
		int l,r,x;
		cin>>l>>r>>x;
		q_l[l-1].push_back(make_pair(x,i));
		q_r[r-1].push_back(make_pair(x,i));
		anslist[i]=0;
	}

	for(int i=0;i<n;i++){
		//提取資料，x為索引值，j為查詢編號
		for(auto [x,j]:q_l[i]){					//定義此為part A程式碼
			anslist[j]-=numcountlist[x];

		}
		numcountlist[numlist[i]]++;
		for(auto [x,j]:q_r[i]){					//定義此為part B程式碼
			anslist[j]+=numcountlist[x];

		}
	}
	/*
	[原理解說]
	part B程式碼為計算到右邊界x值出現過幾次
	part A程式碼為計算到左邊界x值出現過幾次
	part A - part B即為該範圍x出現次數
	因為是計算左邊到右邊(含)，所以++放在中間
	若++放在A上方，則左邊不會被計算到(剛好在左邊邊界的那個值會被扣掉)
	同理，若++放在B下方，則右邊不會被計算到(剛好在右邊邊界的那個值不會被計算到)
	*/
	for(int i=0;i<m;i++){
		cout<<anslist[i]<<"\n";
	}
	return 0;
}

/*
[Q]
https://codeforces.com/group/m7tZBvb5sH/contest/369768/problem/L
[I1]
5 6
1 2 3 1 1
1 5 1
1 3 1
2 4 3
3 5 1
1 5 4
1 5 3
[O1]
3
1
1
2
0
1
*/

/*
[I1]
5 6
1 1 1 1 1
1 5 1
1 3 1
2 4 3
3 5 1
1 5 4
1 5 3
[O1]
3
1
1
2
0
1
*/