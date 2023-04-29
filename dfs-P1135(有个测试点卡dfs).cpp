#include<bits/stdc++.h>
using namespace std;
int n,a,b,arr[201],st[201],least=1e6;
//0不选 1上 -1下
void dfs(int x,int cnt){
	if(st[x]!=0)return;
	if(cnt>least)return;
	if(x>n||x<=0)return;
	if(x==b){
		least=min(least,cnt);
		return;
	}
	st[x]=1;
	dfs(x+arr[x],cnt+1);
	st[x]=0;
	st[x]=-1;
	dfs(x-arr[x],cnt+1);
	st[x]=0;
	
}

int main(){
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	dfs(a,0);
	if(least==1e6){
		cout<<-1;
	}else{
		cout<<least;
	}
	
}
