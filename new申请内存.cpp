#include<iostream>
#include<algorithm>
using namespace std;
int * createint(int n){
	return new int[n];
}

int main(){
	int *p=createint(2);
	p[0]=2;
	p[1]=3;
	printf("%d",p[1]);
	delete[] p;//释放申请数组要加[]
	int *p2=new int();
	delete p2;//释放申请不是数组
	
}
