#include<bits/stdc++.h>
using namespace std;
int a[1001],n,m;
int main(){
	cin>>n>>m;
	int dt=1,dw=n;
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
	int cnt=0;
	while(dt<dw){
		int temp=a[dt++];
		cnt++;
		if(cnt%m!=0){
			a[++dw]=temp;
		}
			
	}
	cout<<a[dt];
	
	return 0;
}
