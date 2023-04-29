#include<bits/stdc++.h>
using namespace std;
int n,m,st[101][101],g[101][101];
// g 1走过/不能走 0没走过
int dx[8]={0,0,-1,1,-1,-1,1,1};
int dy[8]={-1,1,0,0,-1,1,1,-1};
void dfs(int x,int y){
	int nx,ny;
	for(int i=0;i<=7;i++){
		nx=x+dx[i];ny=y+dy[i];
		if(st[nx][ny]==1)continue;
		if(nx<1||nx>n||ny<1||ny>m)continue;
		st[nx][ny]=1;
		dfs(nx,ny);
	}
}
int main(){
	cin>>n>>m;
	char a;
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a;
			g[i][j]=a;
			if(a=='.'){
				st[i][j]=1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(g[i][j]=='W'&&st[i][j]==0){
				st[i][j]==1;
				cnt++;
				dfs(i,j);
			}
		}
	}
	cout<<cnt;
	
	return 0;
}
