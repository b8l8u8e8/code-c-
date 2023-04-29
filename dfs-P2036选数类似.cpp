#include<bits/stdc++.h>
using namespace std;
int n,sd[11],kd[11],st[11],sdcj[1024],kdzh[1024],cnt,result[1024];
//st 0未选 1选了 -1 不选
void dfs(int x){
	if(x>n){
		int sum=0,mulsum=1,pos=0;
		for(int i=1;i<=n;i++){
			if(st[i]==1){
				pos=1;
				sum+=kd[i];
				mulsum*=sd[i];
			}
		}
		if(pos==1){
//			cout<<mulsum<<" "<<sum<<endl;
			sdcj[cnt]=mulsum;
			kdzh[cnt]=sum;
			cnt++;
		}
		
		return;
	}
	st[x]=1;
	dfs(x+1);
	st[x]=0;
	st[x]=-1;
	dfs(x+1);
	st[x]=0;
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>sd[i]>>kd[i];
	}
//	cout<<endl;
	dfs(1);
	for(int i=0;i<cnt;i++){
			result[i]=abs(sdcj[i]-kdzh[i]);
//			if(abs(sdcj[i]-kdzh[j])==0){
//				cout<<"***"<<sdcj[i]<<"  "<<kdzh[j]<<endl;
//			}		
	}
	cout<<*min_element(result,result+cnt);
}
