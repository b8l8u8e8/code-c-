#include<bits/stdc++.h>
using namespace std;
int n,m,a,b,arr[501][501],dis[501][501]; 
typedef pair<int,int> pii;
pii gry[100001];
pii lz[100001];
void bfs(int x,int y){
	dis[x][y]=0;
	queue<pii>q;
	pii t(x,y);
	q.push(t);
	int dx[4]={0,0,-1,1};
	int dy[4]={1,-1,0,0};
	while(q.size()){
		t=q.front();
		q.pop();
		for(int i=0;i<=3;i++){
			pii nt={t.first+dx[i],t.second+dy[i]};
			int newdis=dis[t.first][t.second]+1;
			if(nt.first<1||nt.first>n||nt.second<1||nt.second>m)continue;
			if(!(dis[nt.first][nt.second]==-1||newdis<dis[nt.first][nt.second]))continue;
			q.push(nt);
			dis[nt.first][nt.second]=dis[t.first][t.second]+1;
		}
	}
}
int main(){
	cin>>n>>m>>a>>b;
	for(int i=1;i<=a;i++){
		int x,y;
		cin>>x>>y;
		gry[i]={x,y};
	}
	for(int i=1;i<=b;i++){
		int x,y;
		cin>>x>>y;
		lz[i]={x,y};
	}
	memset(dis,-1,sizeof(dis));
//	bfs(gry[1].first,gry[1].second);
	for(int i=1;i<=a;i++){
		bfs(gry[i].first,gry[i].second);
	}
	for(int i=1;i<=b;i++){
		cout<<dis[lz[i].first][lz[i].second]<<endl;	
	}
	return 0;
}
