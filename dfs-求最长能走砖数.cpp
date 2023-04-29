#include<bits/stdc++.h>
using namespace std;
int w,h,arr[21][21],x,y,st[21][21],res;
//arr 1可以走 0不能走
//st 1走过了 0没走
int dx[4]={0,0,-1,1};//上下左右
int dy[4]={1,-1,0,0};
void dfs(int x1,int y1){
	int nx,ny;
	for(int i=0;i<4;i++){
		nx=x1+dx[i];
		ny=y1+dy[i];
		if(nx<1||nx>h||ny<1||ny>w)continue;
		if(st[nx][ny]==1)continue;
		if(arr[nx][ny]==0)continue;
		if(st[nx][ny]==0){
			st[nx][ny]=1;
			res++;
			dfs(nx,ny);
//			st[x][y]=0;
//			st[x1][y1]=0;
		
	}
	}
}

int main(){
	char b;
	cin>>w>>h;
	for(int i=1;i<=h;i++){
		for(int j=1;j<=w;j++){
			cin>>b;
			if(b=='.'){
				arr[i][j]=1;
			}else if(b=='#'){
				arr[i][j]=0;
			}else if(b=='@'){
				x=i;y=j;
				arr[i][j]=1;
			}
		}
	}
//	st[x][y]=1;
	//	cout<<x<<" "<<y<<endl;
	dfs(x,y);
	cout<<res;
}

/*
  3 3
  ..@
  ##.
  .##
 */
