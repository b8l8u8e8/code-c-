#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int i,int j){
	//交换数组a中i，j元素
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
void aprint(int *a,int n=5){
	//打印数组
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
bool tiaojian(int *a){
	if(a[3]==3||a[2]==3||a[0]==0){
		return false;
	}
	return true;
	}
void qpl(int *a,int i,int j){//全排列
	if(i==j&&tiaojian(a)==true){
		aprint(a);
	}
	for(int i2=i;i2<=j;i2++){
		swap(a,i,i2);
		qpl(a,i+1,j);//递归
		swap(a,i,i2);
	}
}

int main(){
	int a[5]={0,1,2,3,4};
	qpl(a,0,4);
	
}
