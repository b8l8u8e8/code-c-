#include<iostream>
#include<algorithm>
using namespace std;
int compare(int a,int b);
int main(){
	int a[5]={3,5,1,6,2};
	sort(&a[0],&a[5],compare);
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	
}
int compare(int a,int b){
	return a>b;
}
