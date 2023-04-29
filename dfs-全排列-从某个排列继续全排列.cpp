#include<bits/stdc++.h>
using namespace std;
int n;
int arr[60],st[60],res,arr2[60];
void dfs(int x){
	if(x>n){
		res++;
		for(int i=1;i<=n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=n;i++){
		if(res==0){
			i=arr2[x];
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
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr2[i];
	}
	dfs(1);
}

