#include<iostream>
using namespace std;
class person{
public:
	int a=0;
	int c=0;
	person(){
		a=0;
		c=0;
		cout<<"普通构造函数"<<endl;
	}
	person(int b){
		cout<<"含参构造函数"<<endl;
		a=b;
	}
	person(const person &b){
		cout<<"拷贝构造函数"<<endl;
		a=b.a;
		c=b.c;
	}
	
	~person(){
		cout<<"析构函数"<<endl;
	}
};


int main(){
	person a;
	cout<<"a.a="<<a.a<<"a.c="<<a.c<<endl;
	person b(10);
	cout<<"b.a="<<b.a<<"b.c="<<b.c<<endl;
	person c(b);
	cout<<"c.a="<<c.a<<"c.c="<<c.c<<endl;
	
	
} 
