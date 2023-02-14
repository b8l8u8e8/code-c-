#include<iostream>
using namespace std;
int func(int a,int b,int c=20);

int main(){
cout<<func(1,2,3)<<endl;
cout<<func(1,2)<<endl;
}
int func(int a,int b,int c){
	return a+b+c;
}
