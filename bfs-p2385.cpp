#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;
int m,n,m1,m2,g[31][31],dis[31][31];
typedef pair<int,int> pii;
pii t,start,end1;


void bfs(pii t1,int m1,int m2){
	int dx[]={m1,m1,-m1,-m1,m2,-m2,m2,-m2};
	int dy[]={m2,-m2,m2,-m2,m1,m1,-m1,-m1};
	queue<pii>q;
	q.push(t1);
	while(q.size()){
		t1=q.front();
		q.pop();
		for(int i=0;i<8;i++){
			pii t2={t1.x+dx[i],t1.y+dy[i]};
			if(t2.x<1||t2.y<1||t2.x>m||t2.y>n)continue;
			if(dis[t2.x][t2.y]!=-1)continue;
			if(g[t2.x][t2.y]==0||g[t2.x][t2.y]==2||g[t2.x][t2.y]==3)continue;
			q.push(t2);
//			cout<<"***"<<t2.x<<"***"<<t2.y<<endl;
			dis[t2.x][t2.y]=dis[t1.x][t1.y]+1;
			if(t2==end1){
				cout<<dis[t2.x][t2.y];
				return;
			}
		}
	}
}
int main(){
	cin>>m>>n>>m1>>m2;
	memset(dis,-1,sizeof dis);
	for(int i=1;i<=m;i++){
		for(int i2=1;i2<=n;i2++){
			cin>>g[i][i2];
			if(g[i][i2]==3){
				start.x=i;start.y=i2;
//				cout<<start.x<<" "<<start.y;
			}else if(g[i][i2]==4){
				end1.x=i;end1.y=i2;
//				cout<<end1.x<<" "<<end1.y;
			}
		}
	}
	dis[start.x][start.y]=0;
	bfs(start,m1,m2);
	return 0;
}
