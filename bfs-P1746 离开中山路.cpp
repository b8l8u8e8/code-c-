#include<bits/stdc++.h>
using namespace std;
int dis[1001][1001],n,x11,y11,x22,y22;
char g[1001][1001];
typedef pair<int,int> pii;
int bfs(int x1,int y1,int x2,int y2){
	memset(dis,-1,sizeof(dis));
	dis[x1][y1]=0;
	pii t={x1,y1};
	queue<pii>q;
	q.push(t);
	int dx[4]={0,0,1,-1};
	int dy[4]={1,-1,0,0};
	while(q.size()){
		t=q.front();
		q.pop();
		for(int i=0;i<=3;i++){
			pii nt={t.first+dx[i],t.second+dy[i]};
			if(nt.first<1||nt.second<1||nt.first>n||nt.second>n)continue;
			if(g[nt.first][nt.second]=='1')continue;
			if(dis[nt.first][nt.second]!=-1)continue;
			q.push(nt);
			dis[nt.first][nt.second]=dis[t.first][t.second]+1;
			if(nt.first==x2&&nt.second==y2)return dis[x2][y2];
		}
		
	}
	return dis[x2][x2];
}
int main()
{	
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>g[i][j];
		}
	}
	cin>>x11>>y11>>x22>>y22;
	cout<<bfs(x11,y11,x22,y22);
	
	
	return 0;
}
