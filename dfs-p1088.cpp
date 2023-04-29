#include<bits/stdc++.h>
using namespace std;
int n,m,res,cnt2,jz=0;
int a[10010],st[10010],arr[10010];
void dfs(int x){
	int i;
	if(jz==1){
		return;
	}
	if(x>n){
		res++;
		if(res==m+1){
			for(i=1;i<=n;i++){
				printf("%d ",arr[i]);
			}
			jz=1;
		}
		return;
	}
	
	for(int i=1;i<=n;i++){
		if(res==0){
			i=a[x];
		}
		if(st[i]==0){
			st[i]=1;
			arr[x]=i;
			dfs(x+1);
			arr[x]=0;
			st[i]=0;
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	dfs(1);
}
//p1088
