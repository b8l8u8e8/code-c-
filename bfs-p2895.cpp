#include<bits/stdc++.h>
using namespace std;
int lx[310][310],st[310][310];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
typedef pair<int,int> pii;
int bfs(int x,int y){
	st[x][y]=0;
	pii t={x,y};
	queue<pii>q;
	q.push(t);
	while(q.size()){
		t=q.front();
		q.pop();
		for(int i=0;i<4;i++){
			pii nt={t.first+dx[i],t.second+dy[i]};
			if(nt.first<0||nt.second<0)continue;
			if(st[nt.first][nt.second]!=-1)continue;
			if(st[t.first][t.second]+1>=lx[nt.first][nt.second])continue;
			st[nt.first][nt.second]=st[t.first][t.second]+1;
			q.push(nt);
			if(lx[nt.first][nt.second]==1e9)return st[nt.first][nt.second];
		}
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	memset(st,-1,sizeof st);
	fill(&lx[0][0],&lx[0][0]+310*310,1e9);
	for(int i=0;i<n;i++){
		int x,y,t;
		cin>>x>>y>>t;
		lx[x][y]=min(lx[x][y],t);
		for(int i=0;i<=3;i++){
			if(x+dx[i]<0||y+dy[i]<0)continue;
			lx[x+dx[i]][y+dy[i]]=min(lx[x+dx[i]][y+dy[i]],t);
		}
	}
	cout<<bfs(0,0);
	return 0;
}
