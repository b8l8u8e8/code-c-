#include<bits/stdc++.h>
using namespace std;
int arr[11],n,j;
int arr2[10000][11];
void dfs(int x){
	if(x>10){
		int cnt=0;
		for(int i=1;i<=10;i++){
			cnt+=arr[i];
		}
		if(cnt==n){
			for(int i=1;i<=10;i++){
				arr2[j][i]=arr[i];
			}
			j++;
		}
		
		return;
	}
	for(int i=1;i<=3;i++){
		arr[x]=i;
		dfs(x+1);
		arr[x]=0;
	}
}
int main(){
	cin>>n;
	if(n<10 || n>30){
		cout<<0;
	}else{
		dfs(1);
		cout<<j<<endl;
		for(int j2=0;j2<j;j2++){
			for(int i=1;i<=10;i++){
				cout<<arr2[j2][i]<<" ";
			}
			if(j2!=j-1){
				cout<<endl;
			}
			
		}
	}
}
