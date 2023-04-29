#include<bits/stdc++.h>
using namespace std;
int n;
int st[20];
void dfs(int x){
	if(x>n){
		for(int i=1;i<=n;i++){
			if(st[i]==1){
				cout<<i;
			}
		}
		cout<<endl;
		return;
	}
	st[x]=2;
	dfs(x+1);
	st[x]=0;
	st[x]=1;
	dfs(x+1);
	st[x]=0;

}

int main(){
	n=3;
	dfs(1);
	return 0;
	
	
}
