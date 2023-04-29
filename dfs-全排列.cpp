#include<bits/stdc++.h>
using namespace std;
int n;
int arr[10];
int st[10];
void dfs(int x){
	if(x>n){
		for(int i=1;i<=n;i++){
			cout<<"    "<<arr[i];
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++){
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
	dfs(1);
	return 0;
	
	
}
