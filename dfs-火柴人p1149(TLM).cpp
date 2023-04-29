#include<bits/stdc++.h>
using namespace std;
int n,arr[4],cnt,jz;
int hcbs[1200]={6,2,5,5,4,5,6,3,7,6};
//,8,4,7,7,6,7,8,5,9,8,11,7,10,10,9,10,11,8,12,11,11
void dfs(int x){
	if(x>3){
//		for(int i=1;i<=3;i++){
//			cout<<arr[i]<<" ";
//		}
		for(int i=1;i<=3;i++){
			if(arr[i]>=10&&hcbs[arr[i]]==0){
				int temp=arr[i];
				for(int i2=0;temp>=10;i2++){
					hcbs[arr[i]]+=hcbs[temp%10];
					temp/=10;
				}
				hcbs[arr[i]]+=hcbs[temp%10];
			}			
		}
//		cout<<"*"<<hcbs[arr[1]]<<" "<<hcbs[arr[2]]<<" "<<hcbs[arr[3]];
		if(hcbs[arr[1]]+hcbs[arr[2]]+4+hcbs[arr[3]]==n){
			if(arr[1]+arr[2]==arr[3]){
				cnt++;
//				cout<<"***";
			}
				
			}
//		cout<<endl;
		
		return;
	}
	for(int i=1;i<=1000;i++){
			arr[x]=i-1;
			dfs(x+1);
			arr[x]=0;
	}
}

int main(){
	cin>>n;
	dfs(1);
	cout<<cnt;
}
//p1149
