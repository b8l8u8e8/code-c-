#include<bits/stdc++.h>
using namespace std;
int myrand(int max){//返回随机数1到max-1
	srand(time(0));
	return rand()%(max-1)+1;
	
}
int main(){
	int m,n,cnt=0,i=0,i2=0;//cnt计数退了多少人,i,i2 while内部计数
	cout<<"请输入m:";
	cin>>m;
	n=myrand(m);
	cout<<"随机n（n<m）为："<<n<<endl;
	int a[m+1]={0,};
	//1-m个人默认值为0，代表都在
	while(cnt!=m-1){
		i2++;
		i++;
		
		if(a[i2]==1){
			i--;
		}
		if(i==n){
			cnt++;
			a[i2]=1;
			i=0;
		}
		if(i2==m){
			i2=0;
		}
	}
	for(int i=1;i<=m;i++){
		if(a[i]==0){
			cout<<"胜利者:"<<i<<endl;
			break;
		}
	}
	return 0;
}
