#include<iostream>
#include<string>
using namespace std;

class computer{
public:
	int a;
	int b;
	computer(){
		a=0;
		b=0;
	}
	virtual int result(){
		return 0;
	}
};
class subcomputer:public computer{
	int result(){
		return a-b;
	}
};
class addcomputer:public computer{
	int result(){
		return a+b;
	}
};
class mulcomputer:public computer{
public:
	int result(){
		return a*b;
	}
};
void test01(){
	computer *p=new mulcomputer;
	p->a=10;
	p->b=50;
	cout<<p->result()<<endl;
}
int main(){
	test01();
}
