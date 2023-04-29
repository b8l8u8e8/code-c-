#include<bits/stdc++.h>
using namespace std;
int n,k,cnt;
int arr[10],arr2[100],st[10];
int ss(int a){
	int pos=1;
	if(a==1){
		return 0;
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			pos=0;
			break;
		}
	}
	return pos;
}
void dfs(int x,int start){
	if(x>k){
		int sum=0;
		for(int i=1;i<=k;i++){
			sum+=arr2[i];
		}
		if(ss(sum)){
			cnt++;
		}
//		for(int i=1;i<=k;i++){
//			cout<<arr2[i];
//		}
//		cout<<endl;
		return;
	}
	for(int i=start;i<=n;i++){
		if(arr[i]>=arr2[x-1]){
			arr2[x]=arr[i];
			dfs(x+1,i+1);
			arr2[x]=0;
		}
		
	}
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	sort(arr+1,arr+n+1);
	dfs(1,1);
	cout<<cnt;
	return 0;	
}
