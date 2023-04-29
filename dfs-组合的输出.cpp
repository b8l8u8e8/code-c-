#include<bits/stdc++.h>
using namespace std;
int n,n2;
int arr[10];
void dfs(int x){
	if(x>n){
		for(int i=1;i<=n;i++){
			cout<<setw(3)<<arr[i];
		}
		cout<<endl;
		return;
	}
	for(int i=1;i<=n2;i++){
		
			arr[x]=i;
			dfs(x+1);
			arr[x]=0;
		
			
	}
	
}

int main(){
	cin>>n2>>n;
	dfs(1);
	return 0;
	
	
}
