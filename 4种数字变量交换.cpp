#include<iostream>
#include<bitset>
using namespace std;

int main(int argc,char*argv[]){

	//4种数字交换
	int a,b;
	//第一种变量交换
	//第二种
	a=1;b=2;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"a="<<a<<" b="<<b<<endl;
	//第三种
	a=1;b=2;
	a=a+b-(b=a);
	cout<<"a="<<a<<" b="<<b<<endl;
	//第四种位运算（两数不能相等，不然^为0）
	a=1;b=2;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"a="<<a<<" b="<<b<<endl;
	
	
	
	
	
	
	return 0;
	
}
