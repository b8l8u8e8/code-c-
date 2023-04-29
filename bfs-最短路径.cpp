#include<bits/stdc++.h>
using namespace std;
int n,m;
int g[101][101];
int dis[101][101];
typedef pair<int,int> pii ;
int bfs(int x1,int y1){
	memset(dis,-1,sizeof(dis));
	dis[x1][y1]=0;
	pii t(x1,y1);
	queue<pii>q;
	q.push(t);
	int dx[4]={0,0,1,-1};
	int dy[4]={1,-1,0,0};
	while(q.size()){
		t=q.front();
		q.pop();
		for(int i=0;i<=3;i++){
			pii nt={t.first+dx[i],t.second+dy[i]};
			if(nt.first<1||nt.second<1||nt.first>m||nt.second>n)continue;
			if(g[nt.first][nt.second]==1)continue;
			if(dis[nt.first][nt.second]!=-1)continue;
			q.push(nt);
			dis[nt.first][nt.second]=dis[t.first][t.second]+1;
			if(nt.first==n&&nt.second==m){
				return dis[n][m];
			}
			
		}
		
	}
	return dis[n][m];
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>g[i][j];
		}
	}
	cout<<bfs(1,1);
	return 0;
}
