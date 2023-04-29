#include<bits/stdc++.h>
using namespace std;
int n,g[21][21],b[21];//i后面可以接j
string a[21],start;
int res;
void dfs(int x,int cnt){
	res=max(res,cnt);
	for(int i=1;i<=n;i++){
		if(g[x][i]==0)continue;
		if(b[i]>=2)continue;
		b[i]++;
		dfs(i,cnt+a[i].size()-g[x][i]);
		b[i]--;
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>start;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<min(a[i].size(),a[j].size());k++){
				if(a[i].substr(a[i].size()-k)==a[j].substr(0,k)){
					g[i][j]=k;
					break;
				}
			}
		}   
	}
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//				cout<<g[i][j]<<" ";
//			
//		}  
//		cout<<endl;
//	}
	for(int i=1;i<=n;i++){	
		fill(b,b+21,0);
		if(start[0]==a[i][0]){
			b[i]++;
			dfs(i,a[i].size());
		}
	}
	cout<<res;
	return 0;
}
