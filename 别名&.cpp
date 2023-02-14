#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
 int a=20;
 int &b=a;
 b=200;
 cout<<a<<endl;
 int c=1000,d=2000;
 swap(c,d);
 cout<<"c的值"<<c<<"d的值"<<d;
}
